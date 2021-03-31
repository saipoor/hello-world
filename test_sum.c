#include"unity_internals.h"
#include"unity.h"
#include"sum.h"

void setUp(void)
{
}
void tearDown(void)
{
}
void test_sum(){
    TEST_ASSERT_EQUAL((sum(10,40)),50);
}
int main(){
    UNITY_BEGIN();
    RUN_TEST(test_sum);
    return (UNITY_END());
}