#include "include/kv_engine.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace kv;

const int N = 1000000;

int main(int argc, char *argv[]) {
    const std::string rdma_addr(argv[1]);
    const std::string rdma_port(argv[2]);

    LocalEngine *kv_imp = new LocalEngine();
    assert(kv_imp);
    kv_imp->start(rdma_addr, rdma_port);
    std::string * keys = new std::string[N];
    std::string * values = new std::string[N];
    srand((unsigned int)time(0));


    std::string key;
    std::string value;

    int x,y;
    
    for(x = 0;x < N ; x++)
    {
        for(y = 0 ; y < 16 ; y++)
            keys[x] += char(rand() % 26 + 64);
        for(y = 0 ; y < 128 ; y++)
            values[x] += char(rand() % 26+ 96);
        
    } 




    auto start_time = std::chrono::high_resolution_clock::now();

    for(x = 0;x < N;x++)
    {
        if (!kv_imp->write(keys[x], values[x])) 
        {
          std::cout << "Write Error!" << std::endl;
        } 
    }

    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::high_resolution_clock::now() - start_time).count();
    std::cout << "Write Time " << duration << " ns\n";
    std::cout <<"Thoughput:" << N / (double)duration * 1000000000 << std::endl;

    /*read*/

    start_time = std::chrono::high_resolution_clock::now();
    for(x = 0;x < N;x++)
    {
        kv_imp->read(keys[x], value);
        //assert(value == values[x]);
        //std::cout << "Value: " << value << std::endl;
        
    }
    duration = std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::high_resolution_clock::now() - start_time).count();
    std::cout << "Read Time " << duration << " ns\n";
    std::cout <<"Thoughput:" << N / (double)duration * 1000000000  << std::endl;

    kv_imp->stop();
    delete kv_imp;

    return 0;
}
