#include "gtest/gtest.h"
#include "textfilewriter.h"
#include "linkedlist.h"

TEST(TestFileWriterTest, WriteTextFile) {
    //write_file("20220517.list");
    create_music_titles(NULL);
    empty();
}
// LinkedList의 append_left 함수 테스트
// 이 테스트는 새로운 노드를 재생 목록의 첫 번째 위치에 추가하고
// 리스트의 크기를 확인하여 추가가 제대로 이루어졌는지 확인합니다.
TEST(LinkedListTest, AddTest) {
    // 새로운 노드 "Test"를 리스트의 첫 번째 위치에 추가합니다.
    append_left(5, "Test");
    // 리스트의 크기가 1인지 확인합니다.
    EXPECT_EQ(size(), 1);
    // 테스트 후 리스트를 정리합니다.
    clear();
}

// LinkedList의 clear 함수 테스트
// 이 테스트는 리스트에 노드를 추가한 후 clear 함수를 호출하여
// 리스트가 비워졌는지 확인합니다.
TEST(LinkedListTest, ClearTest) {
    // 새로운 노드 "Test"를 리스트의 첫 번째 위치에 추가합니다.
    append_left(5, "Test");
    // clear 함수를 호출하여 리스트를 비웁니다.
    clear();
    // 리스트가 비었는지 확인합니다.
    EXPECT_TRUE(empty());
}

// main 함수는 Google Test 프레임워크를 초기화하고 테스트를 실행합니다.
int main(int argc, char **argv) {
    // Google Test 초기화
    ::testing::InitGoogleTest(&argc, argv);
    // 모든 테스트 실행
    return RUN_ALL_TESTS();
}
