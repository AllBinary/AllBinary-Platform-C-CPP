
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANIMATION_PGUTIL_H
        #define ORG_ALLBINARY_ANIMATION_PGUTIL_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "FixedPoint.h"

class PGUtil
            : public Object
         {

    private: static PGUtil instance() { return PGUtil(); }

    public: static PGUtil getInstance();

    public: void flattenCubicBezier(int32_t x0, int32_t y0, int32_t x1, int32_t y1, int32_t x2, int32_t y2, int32_t x3, int32_t y3, std::vector<int32_t> outX, std::vector<int32_t> outY, std::vector<int32_t> count, int32_t maxPoints);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_PGUTIL_H
