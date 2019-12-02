
#include "visitor.hpp"
// class CountVisitor{
//     private:
//         int ops;
//         int rands;
//         int mults;
//         int divs;
//         int add;
//         int sub;
//         int pow;

//         int ceil;
//         int floor;
//         int abs;
//         int trunc;
//         int paren;

//     public:
//         CountVisitor();
        CountVisitor::CountVisitor(){
            ops = 0;
            rands = 0;
            mults = 0;
            divs = 0;
            add = 0;
            sub = 0;
            pow = 0;
            ceil = 0;
            floor = 0;
            abs = 0;
            trunc = 0;
            paren = 0;
        }
        void CountVisitor::visit_op(){this->ops++;}
        int CountVisitor::op_count(){return this->ops;}
        void CountVisitor::visit_rand(){this->rands++;}
        int CountVisitor::rand_count(){return this->rands;}
        void CountVisitor::visit_mult(){this->mults++;}
        int CountVisitor::mult_count(){return this->mults;}
        void CountVisitor::visit_div(){this->divs++;}
        int CountVisitor::div_count(){return this->divs;}
        void CountVisitor::visit_add(){this->add++;}
        int CountVisitor::add_count(){return this->add;}
        void CountVisitor::visit_sub(){this->sub++;}
        int CountVisitor::sub_count(){return this->sub;}
        void CountVisitor::visit_pow(){this->pow++;}
        int CountVisitor::pow_count(){return this->pow;}

        void CountVisitor::visit_ceil(){this->ceil++;}
        int CountVisitor::ceil_count(){return this->ceil;}
        void CountVisitor::visit_floor(){this->floor++;}
        int CountVisitor::floor_count(){return this->floor;}
        void CountVisitor::visit_abs(){this->abs++;}
        int CountVisitor::abs_count(){return this->abs;}
        void CountVisitor::visit_trunc(){this->trunc++; }
        int CountVisitor::trunc_count(){return this->trunc;}
        void CountVisitor::visit_paren(){this->paren++;}
        int CountVisitor::paren_count(){return this->paren;}
