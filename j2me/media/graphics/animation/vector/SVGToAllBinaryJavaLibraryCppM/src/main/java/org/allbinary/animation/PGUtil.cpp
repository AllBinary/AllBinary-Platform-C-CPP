
        /* Generated Code Do Not Modify */
        



            #include "../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "FixedPoint.h"

class PGUtil
            : public Object
         {
        

    private: static const instance: PGUtil = new PGUtil();

    public static PGUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return instance;
    
}


    public flattenCubicBezier(int32_t x0, int32_t y0, int32_t x1, int32_t y1, int32_t x2, int32_t y2, int32_t x3, int32_t y3, std::vector<int32_t> outX, std::vector<int32_t> outY, std::vector<int32_t> count, int32_t maxPoints){

    fixedPoint: FixedPoint = FixedPoint.getInstance()!;;
    

    steps: int32_t = 10;;
    




                        for (
    i: int32_t = 1;i <= steps; i++)
        {

    t: int32_t = fixedPoint!.div(fixedPoint!.toFixed(i), fixedPoint!.toFixed(steps))!;;
    

    mt: int32_t = fixedPoint!.ONE -t;;
    

    mt3: int32_t = fixedPoint!.mul(fixedPoint!.mul(mt, mt), mt)!;;
    

    mt2t3: int32_t = 3 *fixedPoint!.mul(fixedPoint!.mul(mt, mt), t);;
    

    mtt23: int32_t = 3 *fixedPoint!.mul(fixedPoint!.mul(mt, t), t);;
    

    t3: int32_t = fixedPoint!.mul(fixedPoint!.mul(t, t), t)!;;
    

    x: int32_t = fixedPoint!.mul(mt3, x0) +fixedPoint!.mul(mt2t3, x1) +fixedPoint!.mul(mtt23, x2) +fixedPoint!.mul(t3, x3);;
    

    y: int32_t = fixedPoint!.mul(mt3, y0) +fixedPoint!.mul(mt2t3, y1) +fixedPoint!.mul(mtt23, y2) +fixedPoint!.mul(t3, y3);;
    

                        if(count[0] < maxPoints)
                        
                                    {
                                    outX[count[0]]= x;
    
outY[count[0]]= y;
    
count[0]++;
    

                                    }
                                
}

}


};

            

