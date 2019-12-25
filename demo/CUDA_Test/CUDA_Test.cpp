#include <cstdio>
#include <iostream>
#include "funset.hpp"

int main()
{
	//int ret = test_image_process_laplacian();
	//int ret = test_get_device_info();
	//int ret = test_vector_add();
    //int ret = test_long_vector_add();
    //int ret = test_calculate_histogram();
    //int ret = test_streams();
    //int ret = test_image_process_histogram_equalization();
    int ret = test_heat_conduction();

	if (ret == 0) fprintf(stdout, "========== test success ==========\n");
	else fprintf(stderr, "########## test fail ##########\n");

	return 0;
}
