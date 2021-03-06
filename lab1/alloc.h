#ifndef LAB1_ALLOCATOR_ALLOC_H
#define LAB1_ALLOCATOR_ALLOC_H

#include <cstddef>

namespace alloc {

struct Chunk {
  size_t next_chunk;
  size_t prev_chunk;
  bool free;

  Chunk(size_t next_chunk, size_t prev_chunk, bool free)
      : next_chunk(next_chunk), prev_chunk(prev_chunk), free(free) {}
};

class Allocator {
  void* pool;
 public:
  Allocator(size_t size);
  ~Allocator();

  void *mem_alloc(size_t size);

  void mem_free(void *ptr);

  void *mem_realloc(void *ptr, size_t size);

  void mem_dump();
};
}

#endif 
