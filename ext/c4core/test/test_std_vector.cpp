#include "c4/test.hpp"
#include "c4/std/vector.hpp"

namespace c4 {

template< size_t N >
std::vector<char> ctor(const char (&s)[N])
{
    return std::vector<char>(s, s+N-1);
}

TEST(std_vector, to_substr)
{
    std::vector<char> s = ctor("barnabe");
    auto ss = to_substr(s);
    EXPECT_EQ(ss.str, s.data());
    EXPECT_EQ(ss.len, s.size());
    ss[0] = 'B';
    EXPECT_EQ(s[0], 'B');
}

} // namespace c4
