#include <stdlib.h>
#include "../thirdparty/ctest.h"
#include "../src/discriminant.h"
#include "../src/equation.h"

CTEST_DATA(test_data)
{
    int a;
    int b;
    int c;
    float real_d;
    float ex_d;
    float root[1];
    float ex_root[1];
    int real_flg;
    int ex_flag;
};

CTEST2(test_data, test_d1) 
{
    data->a = 1;
    data->b = 3;
    data->c = 2;
    
    data->ex_d= 1;
	data->real_d = discriminant(data->a, data->b, data->c);
	ASSERT_EQUAL(data->ex_d, data->real_d);
}

CTEST2(test_data, test_d2) 
{
    data->a = 1;
    data->b = 3;
    data->c = 3;
    
    data->ex_d = -1;
	data->real_d = discriminant(data->a, data->b, data->c);
	ASSERT_EQUAL(data->ex_d, data->real_d);
}

CTEST2(test_data, a_zero)
{
	data->a = 0;
	data->b = 4;
	data->c = 2;
	data->ex_flag = 1;
	
	data->real_flag = equation(data->a, data->b, data->c, data->root);
	
	ASSERT_EQUAL(data->ex_flag, data->real_flag);
}

CTEST2(test_data, roots)
{
	data->a = 1;
	data->b = 4;
	data->c = 3;
	data->root[0] = -4;
	data->root[1] = 0;
	ex_flag = 2;
	
	data->real_flg = equation(data->a, data->b, data->c, data->ex_root);
	ASSERT_EQUAL(data->ex_flag, data->real_flag);
	ASSERT_DBL_NEAR(data->ex_root[0], data->root[0]);
	ASSERT_DBL_NEAR(data->ex_root[1], data->root[1]);
	
}

