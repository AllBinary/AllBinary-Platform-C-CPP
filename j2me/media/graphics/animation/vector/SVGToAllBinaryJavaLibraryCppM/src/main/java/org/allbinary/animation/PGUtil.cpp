
        /* Generated Code Do Not Modify */
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "FixedPoint.h"

class PGUtil
            : public Object
         {

    private: static PGUtil instance() { return PGUtil(); }

    public: static PGUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PGUtil::instance();
    
}


    public: void flattenCubicBezier(int32_t x0, int32_t y0, int32_t x1, int32_t y1, int32_t x2, int32_t y2, int32_t x3, int32_t y3, std::vector<int32_t> outX, std::vector<int32_t> outY, std::vector<int32_t> count, int32_t maxPoints){

    FixedPoint fixedPoint = FixedPoint::getInstance();;
    

    int32_t steps = 10;;
    




                        for (
    int32_t i = 1;i <= steps; i++)
        {

    int32_t t = fixedPoint.div(fixedPoint.toFixed(i), fixedPoint.toFixed(steps));;
    

    int32_t mt = fixedPoint.ONE -t;;
    

    int32_t mt3 = fixedPoint.mul(fixedPoint.mul(mt, mt), mt);;
    

    int32_t mt2t3 = 3 *fixedPoint.mul(fixedPoint.mul(mt, mt), t);;
    

    int32_t mtt23 = 3 *fixedPoint.mul(fixedPoint.mul(mt, t), t);;
    

    int32_t t3 = fixedPoint.mul(fixedPoint.mul(t, t), t);;
    

    int32_t x = fixedPoint.mul(mt3, x0) +fixedPoint.mul(mt2t3, x1) +fixedPoint.mul(mtt23, x2) +fixedPoint.mul(t3, x3);;
    

    int32_t y = fixedPoint.mul(mt3, y0) +fixedPoint.mul(mt2t3, y1) +fixedPoint.mul(mtt23, y2) +fixedPoint.mul(t3, y3);;
    

                        if(count[0] < maxPoints)
                        
                                    {
                                    outX[count[0]]= x;
    
outY[count[0]]= y;
    
count[0]++;
    

                                    }
                                
}

}


};

            

