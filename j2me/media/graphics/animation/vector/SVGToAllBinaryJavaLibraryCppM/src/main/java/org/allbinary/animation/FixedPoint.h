
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANIMATION_FIXEDPOINT_H
        #define ORG_ALLBINARY_ANIMATION_FIXEDPOINT_H

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FixedPoint
            : public Object
         {

    private: static FixedPoint instance() { return FixedPoint(); }

    public: static FixedPoint getInstance();

    public: const int32_t ONE = 1<<16;

    public: int32_t toFixed(double val);

    public: int32_t toFixed(float val);

    public: int32_t mul(int32_t a, int32_t b);

    public: int32_t div(int32_t a, int32_t b);

    public: int32_t toInt(int32_t fixed);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_FIXEDPOINT_H
