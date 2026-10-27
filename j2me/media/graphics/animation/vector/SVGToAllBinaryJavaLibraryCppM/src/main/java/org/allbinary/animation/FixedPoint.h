
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANIMATION_FIXEDPOINT_H
        #define ORG_ALLBINARY_ANIMATION_FIXEDPOINT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FixedPoint
            : public virtual Object
         {

    private: static FixedPoint* instance_owner();
    private: static FixedPoint* instance;

    public: static FixedPoint* getInstance();


            
    public: FixedPoint();
        
    public: const int32_t ONE;

    public: int32_t toFixed(double val);

    public: int32_t toFixed(float val);

    public: int32_t mul(int32_t a, int32_t b);

    public: int32_t div(int32_t a, int32_t b);

    public: int32_t toInt(int32_t fixed);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_FIXEDPOINT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_FIXEDPOINT_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_FIXEDPOINT_H_COMPLETE
        
        #endif
    
