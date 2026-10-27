
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANIMATION_PGUTIL_H
        #define ORG_ALLBINARY_ANIMATION_PGUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class FixedPoint;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PGUtil
            : public virtual Object
         {

    private: static PGUtil* instance_owner();
    private: static PGUtil* instance;

    public: static PGUtil* getInstance();


            
    public: PGUtil();
        
    public: void flattenCubicBezier(int32_t x0, int32_t y0, int32_t x1, int32_t y1, int32_t x2, int32_t y2, int32_t x3, int32_t y3, std::vector<int32_t> outX, std::vector<int32_t> outY, std::vector<int32_t> count, int32_t maxPoints);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_PGUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_PGUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_PGUTIL_H_COMPLETE
        #if __has_include("org/allbinary/animation/FixedPoint.h")
#include "org/allbinary/animation/FixedPoint.h"
#endif

        #endif
    
