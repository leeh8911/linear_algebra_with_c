#pragma once

#include <vector>

namespace LAWC{
    using std::vector;

    class Matrix{
        private:
        int dim;
        vector<int> size;

        struct Address{
            int level;
            void* next;
        };
        Address* top;
        void initialize_address(Address* current);

        public:
        Matrix(int dim, vector<int> size);
    };
}
