
extern zend_class_entry *test_logical_ce;

ZEPHIR_INIT_CLASS(Test_Logical);

PHP_METHOD(Test_Logical, testAnd1);
PHP_METHOD(Test_Logical, testAnd2);
PHP_METHOD(Test_Logical, testAnd3);
PHP_METHOD(Test_Logical, testAnd4);

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_logical_testand4, 0, 0, 2)
	ZEND_ARG_INFO(0, a)
	ZEND_ARG_INFO(0, b)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(test_logical_method_entry) {
	PHP_ME(Test_Logical, testAnd1, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Logical, testAnd2, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Logical, testAnd3, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Logical, testAnd4, arginfo_test_logical_testand4, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
