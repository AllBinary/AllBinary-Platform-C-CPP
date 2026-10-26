
        /* Generated Code Do Not Modify */
        



            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FixedPoint
            : public Object
         {

    private: static FixedPoint instance() { return FixedPoint(); }

    public: static FixedPoint getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FixedPoint::instance();
    
}


    public: const int32_t ONE = 1<<16;

    public: int32_t toFixed(double val){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>((val *65536.0));
    
}


    public: int32_t toFixed(float val){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>((val *65536.0));
    
}


    public: int32_t mul(int32_t a, int32_t b){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>(((a *b)>>16));
    
}


    public: int32_t div(int32_t a, int32_t b){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>((((a)<<16) /b));
    
}


    public: int32_t toInt(int32_t fixed){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fixed>>16;
    
}


};

            

