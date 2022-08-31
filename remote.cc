#include "include/kv_engine.h"
#include <unistd.h>

using namespace kv;

int main(int argc, char *argv[]) {
  const std::string rdma_addr(argv[1]);
  const std::string rdma_port(argv[2]);

  RemoteEngine *kv_imp = new RemoteEngine();
  assert(kv_imp);
  kv_imp->start(rdma_addr, rdma_port);

  do {
    sleep(1);
  } while (kv_imp->alive());

  kv_imp->stop();
  delete kv_imp;

  return 0;
}
