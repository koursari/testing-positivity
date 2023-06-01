#include <gtest/gtest.h>
#include <subtractor.h>


TEST(test_calculations, zeros)
{
    size_t n = 20;
    char answer[n];
    subtractor(0, 0, answer, n);
    EXPECT_STREQ("POSITIVE", answer);
}


TEST(test_calculations, positive)
{
    size_t n = 20;
    char answer[n];
    subtractor(10, 0, answer, n);
    EXPECT_STREQ("POSITIVE", answer);
}

TEST(test_calculations, negative)
{
    size_t n = 20;
    char answer[n];
    subtractor(10, 12, answer, n);
    EXPECT_STREQ("NEGATIVE", answer);
}

TEST(test_calculations, acceptnullwithgrace)
{
    size_t n = 20;
    char * answer = NULL;
    ASSERT_EXIT((subtractor(0,0,answer,n),exit(0)),::testing::ExitedWithCode(0),".*");
}