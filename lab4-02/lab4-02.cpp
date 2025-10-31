#include <iostream>
#include <cstdint>
#include <limits>
using namespace std;

using u8 = uint8_t;
using u16 = uint16_t;
using u64 = uint64_t;

// ======================== HỖ TRỢ CHUNG =========================
template <typename uint>
constexpr int bit_width() { return sizeof(uint) * 8; }

template <typename uint>
inline bool valid_pos(int k) { return k >= 0 && k < bit_width<uint>(); }

// lấy mask W bit an toàn (W có thể = width)
inline u64 mask_w_bits_unsigned(int W, int width)
{
    if (W <= 0)
        return 0ULL;
    if (W >= width)
        return (~0ULL) >> (64 - width); // mask full width
    return (1ULL << W) - 1ULL;
}

// ======================== 1) GET BIT =========================
template <typename uint>
bool get_bit(uint N, int K)
{
    if (!valid_pos<uint>(K))
        return false;
    return ((N >> K) & (uint)1) != 0;
}

// ======================== 2) OUT BITS =========================
template <typename uint>
void out_bits(uint N)
{
    int width = bit_width<uint>();
    for (int i = width - 1; i >= 0; --i)
    {
        cout << (((N >> i) & (uint)1) ? '1' : '0');
    }
    cout << '\n';
}

// ======================== 3) COUNT BIT (popcount) =========================
template <typename uint>
int count_bit(uint N)
{
    int cnt = 0;
    int width = bit_width<uint>();
    for (int i = 0; i < width; ++i)
    {
        if ((N >> i) & (uint)1)
            ++cnt;
    }
    return cnt;
}

// ======================== 4) SET BIT =========================
// Trả về false nếu bit đã có giá trị Status (không thay đổi)
template <typename uint>
bool set_bit(uint &N, int K, bool Status)
{
    if (!valid_pos<uint>(K))
        return false; // nếu ngoài phạm vi -> coi như không thay đổi
    bool cur = ((N >> K) & (uint)1) != 0;
    if (cur == Status)
        return false;
    if (Status)
        N = N | ((uint)1 << K);
    else
        N = N & ~((uint)1 << K);
    return true;
}

// ======================== 5) SWAP BIT K và L =========================
// Hoán vị hai bit K, L; trả về false nếu hai bit đã giống nhau (không thay đổi)
template <typename uint>
bool swap_bit(uint &N, int K, int L)
{
    if (!valid_pos<uint>(K) || !valid_pos<uint>(L))
        return false;
    bool bk = ((N >> K) & (uint)1) != 0;
    bool bl = ((N >> L) & (uint)1) != 0;
    if (bk == bl)
        return false; // không thay đổi
    // nếu khác nhau, chỉ cần flip cả hai
    N ^= (((uint)1 << K) | ((uint)1 << L));
    return true;
}

// ======================== 6) max_len1: dài nhất dãy '1' liên tiếp =========================
template <typename uint>
int max_len1(uint N)
{
    int width = bit_width<uint>();
    int best = 0, cur = 0;
    for (int i = 0; i < width; ++i)
    {
        if ((N >> i) & (uint)1)
        {
            ++cur;
            if (cur > best)
                best = cur;
        }
        else
        {
            cur = 0;
        }
    }
    return best;
}

// ======================== 7) max_len: tìm dãy bit B dài nhất, trả về u16 theo định dạng =========================
// Gói u16:
// bits[0..5]   : len_minus_one (0..63) -> length = len_minus_one+1 (dài tối đa 64)
// bits[6..11]  : start_pos (0..63) (LSB-based)
// bit[12]      : B
// bits[13..15] : 0
// Nếu không tìm thấy dãy nào (không có bit = B), trả về 0.
template <typename uint>
u16 max_len(uint N, bool B)
{
    int width = bit_width<uint>();
    int best_len = 0;
    int best_pos = 0;

    int cur_len = 0;
    int cur_start = -1;

    for (int i = 0; i < width; ++i)
    {
        bool bit = ((N >> i) & (uint)1) != 0;
        if (bit == B)
        {
            if (cur_len == 0)
                cur_start = i;
            ++cur_len;
        }
        else
        {
            if (cur_len > best_len)
            {
                best_len = cur_len;
                best_pos = cur_start;
            }
            cur_len = 0;
            cur_start = -1;
        }
    }
    // cuối chuỗi
    if (cur_len > best_len)
    {
        best_len = cur_len;
        best_pos = cur_start;
    }

    if (best_len == 0)
        return 0; // không có dãy B nào

    // length must be in 1..width ; encode len_minus_one in 6 bits
    int len_minus_one = best_len - 1;
    if (len_minus_one < 0)
        len_minus_one = 0;
    if (len_minus_one > 63)
        len_minus_one = 63;

    int start_pos = best_pos;
    if (start_pos < 0)
        start_pos = 0;
    if (start_pos > 63)
        start_pos = 63;

    u16 res = 0;
    res |= (u16)(len_minus_one & 0x3F);    // bits 0..5
    res |= (u16)((start_pos & 0x3F) << 6); // bits 6..11
    res |= (u16)((B ? 1 : 0) << 12);       // bit 12
    // bits 13..15 remain 0
    return res;
}

// ======================== 8) ROTATE LEFT / RIGHT =========================
template <typename uint>
uint rotate_left(uint N, int K)
{
    int width = bit_width<uint>();
    if (width == 0)
        return N;
    K %= width;
    if (K < 0)
        K += width;
    if (K == 0)
        return N;
    uint high = (N >> (width - K));
    uint low = (N << K);
    // mask out higher bits beyond width (in case uint bigger)
    if (width < (int)sizeof(uint) * 8)
    { /* not possible */
    }
    uint mask = (width == 64) ? (uint)(~(uint)0ULL) : (((uint)1 << width) - 1);
    return ((low | high) & mask);
}

template <typename uint>
uint rotate_right(uint N, int K)
{
    int width = bit_width<uint>();
    if (width == 0)
        return N;
    K %= width;
    if (K < 0)
        K += width;
    if (K == 0)
        return N;
    uint low = (N << (width - K));
    uint high = (N >> K);
    uint mask = (width == 64) ? (uint)(~(uint)0ULL) : (((uint)1 << width) - 1);
    return ((low | high) & mask);
}

// ======================== 9) count_transitions =========================
// Đếm số lần bit i khác bit i+1, cho i = 0..width-2
template <typename uint>
u8 count_transitions(uint N)
{
    int width = bit_width<uint>();
    u8 cnt = 0;
    for (int i = 0; i < width - 1; ++i)
    {
        bool b1 = ((N >> i) & (uint)1) != 0;
        bool b2 = ((N >> (i + 1)) & (uint)1) != 0;
        if (b1 != b2)
            ++cnt;
    }
    return cnt;
}

// ======================== 10) Nearest_window =========================
// Tìm P (0..width-W) sao cho value = bits[P..P+W-1] gần M nhất (tính theo khoảng tuyệt đối).
// Nếu nhiều P cùng bằng nhau, trả về P nhỏ nhất.
// Trả về u8 (giả sử width <= 64).
template <typename uint>
u8 Nearest_window(uint N, uint M, u8 W)
{
    int width = bit_width<uint>();
    if (W == 0 || W > width)
        return 0;                                              // invalid -> trả 0
    u64 mask = mask_w_bits_unsigned<W ? 0 : 0>((int)W, width); // we will not use template; create mask properly next

    // safer mask creation:
    u64 window_mask;
    if (W >= (u8)width)
        window_mask = (width == 64) ? ~0ULL : ((1ULL << width) - 1ULL);
    else
        window_mask = (1ULL << W) - 1ULL;

    u64 bestP = 0;
    u64 bestDiff = (u64)(~0ULL); // big
    int maxP = width - W;
    for (int P = 0; P <= maxP; ++P)
    {
        u64 val = ((u64)N >> P) & window_mask;
        u64 diff = (val > (u64)M) ? (val - (u64)M) : ((u64)M - val);
        if (diff < bestDiff)
        {
            bestDiff = diff;
            bestP = (u64)P;
        }
    }
    return (u8)bestP;
}

// ======================== TEST / DEMO =========================
int main()
{
    using uint = u64; // bạn có thể đổi thành u32/u16/u8 nếu muốn (ở đây dùng u64 làm ví dụ)
    uint N = 9;       // 0...01001
    cout << "out_bits(N): ";
    out_bits<uint>(N); // in 64 bit

    cout << "get_bit(N,0) = " << get_bit<uint>(N, 0) << "\n";
    cout << "get_bit(N,3) = " << get_bit<uint>(N, 3) << "\n";
    cout << "count_bit(N) = " << count_bit<uint>(N) << "\n";

    cout << "set_bit: set bit 1 to 1\n";
    bool changed = set_bit<uint>(N, 1, true);
    cout << " changed? " << changed << " now N = ";
    out_bits<uint>(N);
    cout << " swap_bit pos0 and pos1: ";
    bool swapped = swap_bit<uint>(N, 0, 1);
    cout << "swapped? " << swapped << " -> ";
    out_bits<uint>(N);

    cout << "max_len1 = " << max_len1<uint>(N) << "\n";

    // tìm dãy 1 dài nhất:
    u16 packed = max_len<uint>(N, true);
    cout << "max_len packed (1): 0x" << hex << packed << dec << "\n";
    // giải mã:
    if (packed != 0)
    {
        int len = (packed & 0x3F) + 1;
        int pos = (packed >> 6) & 0x3F;
        int B = (packed >> 12) & 1;
        cout << " longest run: len=" << len << " start=" << pos << " B=" << B << "\n";
    }
    else
        cout << " no run for B\n";

    cout << "rotate_left(N,3): ";
    out_bits<uint>(rotate_left<uint>(N, 3));
    cout << "rotate_right(N,2): ";
    out_bits<uint>(rotate_right<uint>(N, 2));

    cout << "count_transitions: " << (int)count_transitions<uint>(N) << "\n";

    // Nearest window example: N=9, M=5, W=3 -> P should be 1
    u8 P = Nearest_window<uint>((uint)9, (uint)5, (u8)3);
    cout << "Nearest_window for N=9 M=5 W=3 => P = " << (int)P << "\n";

    return 0;
}
