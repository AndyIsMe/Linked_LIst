#include "unity.h"
#include "linkedlist.h"
#include "student.h"

Student Ali = {
      "Ali",                        //name
      23,                           //age
      72.35,                        //weight
      1.78                          //height  
    };
    Item item = {
      (Item *)-1,                   //next
      (void *)&Ali                 //data
    };
     Student Baba = {
      "Baba",                        //name
      26,                           //age
      75.35,                        //weight
      1.83                          //height  
    };
    Item itemBaba = {
      (Item *)-1234,                   //next
      (void *)&Baba                 //data
    };
	 Student Abu = {
      "Abu",                        //name
      20,                           //age
      70.35,                        //weight
      1.80                          //height  
    };
    Item itemAbu = {
      (Item *)-2,                   //next
      (void *)&Abu                 //data
    };
	
void setUp(void)
{
}

void tearDown(void)
{
}
void test_listAdd_given_an_empty_linked_list_then_add_Ali_expect_1_item_in_list(void)
{
  
  LinkedList list;
    Student Ali = {
      "Ali",                        //name
      23,                           //age
      72.35,                        //weight
      1.78                          //height  
    };
    Item item = {
      (Item *)-1,                   //next
      (void *)&Ali                 //data
    };
 
    printf("address of Ali: %p\n", &item);
    
    listInit(&list);
    listInit1(&list,&item);
    TEST_ASSERT_EQUAL_PTR(&item,list.head);    
    TEST_ASSERT_EQUAL_PTR(&item,list.tail);   
    TEST_ASSERT_EQUAL(1,list.len);
    TEST_ASSERT_EQUAL_PTR(&Ali,item.data);
	TEST_ASSERT_NULL(item.next);
    
}


void test_listInit_ensure_initialized_to_NULL_and_0(void){
  LinkedList list = {
    (Item *)-1,
    (Item *)-1,
    10
  };
  
  listInit(&list);
  
  TEST_ASSERT_NULL(list.head);
  TEST_ASSERT_NULL(list.tail);
  TEST_ASSERT_EQUAL(0,list.len);
  
    
}

void test_listAdd_given_linked_list_with_ali_then_add_Baba_and_Abu_expect_3_items_in_list(void){
  
	 LinkedList list;
     printf("address of Ali: %p\n", &item);
     printf("address of Baba: %p\n", &itemBaba);
	 printf("address of Abu: %p\n", &itemAbu);
     
    listInit1(&list,&item);
    listAdd(&list,&itemBaba);
	listAdd(&list,&itemAbu);
    TEST_ASSERT_EQUAL_PTR(&item,list.head);
	TEST_ASSERT_EQUAL_PTR(&itemAbu,list.tail);
    TEST_ASSERT_EQUAL(3,list.len);
    TEST_ASSERT_NULL(itemAbu.next);
    TEST_ASSERT_EQUAL_PTR(&Ali,item.data);
    TEST_ASSERT_EQUAL_PTR(&Baba,itemBaba.data);
	TEST_ASSERT_EQUAL_PTR(&Abu,itemAbu.data);
	
}


/*
void test_listRemovefirst_expect_Baba_and_Abu_(void){
	LinkedList list;
	listInit(&list);
	listAdd(&list,&item);
	listAdd(&list,&itemBaba);
	listAdd(&list,&itemAbu);
	removeFirst(&list);
	TEST_ASSERT_EQUAL_PTR(&itemBaba,list.head);
	TEST_ASSERT_EQUAL_PTR(&itemAbu,list.tail);
	TEST_ASSERT_EQUAL(2,list.len);
	TEST_ASSERT_NULL(itemAbu.next);
	TEST_ASSERT_EQUAL_PTR(&itemAbu,itemBaba.next);
	printf("The address of Ali is not available: %p\n", &item);
	printf("address of Baba: %p\n", &itemBaba);
	printf("address of Abu: %p\n", &itemAbu);
}
*/
/*
void test_listRemoveLast_expect_Ali_and_Baba(void){
	LinkedList list;
	listInit(&list);
	listAdd(&list,&item);
	listAdd(&list,&itemBaba);
	listAdd(&list,&itemAbu);
	removeByNameAndLast(&list,"Abu");
	TEST_ASSERT_EQUAL_PTR(&item,list.head);
	TEST_ASSERT_EQUAL_PTR(&itemBaba,list.tail);
	TEST_ASSERT_EQUAL(2,list.len);
	TEST_ASSERT_NULL(itemBaba.next);
	TEST_ASSERT_EQUAL_PTR(&itemBaba,item.next);
}
*/

void test_listRemoveMiddle_expect_Ali_and_Abu(void){
	LinkedList list;
	listInit(&list);
	listAdd(&list,&item);
	listAdd(&list,&itemBaba);
	listAdd(&list,&itemAbu);
	removeByNameAndLast(&list,"Baba");
	TEST_ASSERT_EQUAL_PTR(&item,list.head);
	TEST_ASSERT_EQUAL_PTR(&itemAbu,list.tail);
	TEST_ASSERT_EQUAL_PTR(&itemAbu,item.next);
	TEST_ASSERT_EQUAL(2,list.len);
	TEST_ASSERT_NULL(itemAbu.next);
}

/*

void test_listRemoveLast_From_2_data_expect_Baba(void){
	LinkedList list;
	listInit(&list);
	listAdd(&list,&itemBaba);
	listAdd(&list,&itemAbu);
	removeByNameAndLast(&list,"Abu");
	TEST_ASSERT_EQUAL_PTR(&itemBaba,list.head);
	TEST_ASSERT_EQUAL(1,list.len);
	TEST_ASSERT_NULL(itemBaba.next);
}
*/
/*
void test_listRemoveFirst_From_2_data_expect_Abu(void){
	LinkedList list;
	listInit(&list);
	listAdd(&list,&itemBaba);
	listAdd(&list,&itemAbu);
	removeFirst(&list);
	TEST_ASSERT_EQUAL_PTR(&itemAbu,list.head);
	TEST_ASSERT_EQUAL(1,list.len);
	TEST_ASSERT_NULL(itemAbu.next);
}

*/

