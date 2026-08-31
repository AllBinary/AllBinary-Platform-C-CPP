
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
#include <org/allbinary/vector/VectorInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "VectorAnimationUtil.h"

class VectorRotationGenerator
            : public Object
         {
        

    private: static const instance: VectorRotationGenerator = new VectorRotationGenerator();

    public static VectorRotationGenerator getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return VectorRotationGenerator.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const vectorAnimationUtil: VectorAnimationUtil = VectorAnimationUtil.getInstance()!;

private constructor (){

            super();
        }


    public std::vector<std::vector<std::vector<int32_t>>> getInstance(VectorInfo vectorRotationInfo){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getInstanceFrames(vectorRotationInfo!.getWidth(), vectorRotationInfo!.getHeight(), vectorRotationInfo!.getPoints(), vectorRotationInfo!.getTotalFrames());;
    
}


    private: const angleFactory: AngleFactory = AngleFactory.getInstance()!;

    public std::vector<std::vector<std::vector<int32_t>>> getInstanceFrames(int32_t width, int32_t height, std::vector<std::vector<int32_t>> points, int32_t frames){

        try {
            
    totalAngle: int16_t = this.angleFactory!.TOTAL_ANGLE;;
    

    angleIncrement: int32_t = totalAngle /frames;;
    

    pointsBasicArrayList: BasicArrayList = new BasicArrayListS(totalAngle /angleIncrement);;
    

    pointBasicArrayList: BasicArrayList = new BasicArrayListS(points.length);;
    

    pointFactory: PointFactory = PointFactory.getInstance()!;;
    

    size: int32_t = points.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
pointBasicArrayList!.add(pointFactory!.createXY(points[index]![0]!, points[index]![1]!));
    
}


    index: int32_t = 0;;
    

        while(index < totalAngle)
        {
pointsBasicArrayList!.add(this.getListAtAngle(width, height, pointBasicArrayList, this.angleFactory!.getAt(index)));
    
index += angleIncrement;
    
}


    newPoints: std::vector<std::vector<std::vector<int32_t>>> = this.vectorAnimationUtil!.toAnimationArrayFromListOfPointListWithPointsPerFrame(pointsBasicArrayList, pointBasicArrayList!.size())!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newPoints;
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.GET_INSTANCE, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil.getInstance()!.NULL_INT_ARRAY_ARRAY_ARRAY;
    
}

}


                //@Throws(Exception.constructor)
            
    public BasicArrayList getListAtAngle(int32_t width, int32_t height, BasicArrayList pointBasicArrayList, Angle angle){

    graphicsPipe: BasicGraphicsPipeline = new BasicGraphicsPipeline(pointBasicArrayList);;
    
graphicsPipe!.createMatrix();
    
graphicsPipe!.translate( -(width>>1),  -(height>>1));
    
graphicsPipe!.rotateToAngle(angle);
    
graphicsPipe!.translate((width>>1), (height>>1));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return graphicsPipe!.getMatrix();;
    
}


};

            

