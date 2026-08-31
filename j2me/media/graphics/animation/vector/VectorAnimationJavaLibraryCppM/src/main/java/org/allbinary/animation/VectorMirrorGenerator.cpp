
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

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "VectorAnimationUtil.h"

class VectorMirrorGenerator
            : public Object
         {
        

    private: static const instance: VectorMirrorGenerator = new VectorMirrorGenerator();

    public static VectorMirrorGenerator getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return VectorMirrorGenerator.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const vectorAnimationUtil: VectorAnimationUtil = VectorAnimationUtil.getInstance()!;

private constructor (){

            super();
        }


    public std::vector<std::vector<std::vector<int32_t>>> getInstance(std::vector<std::vector<std::vector<int32_t>>> points, int32_t width){

        try {
            
    pointFactory: PointFactory = PointFactory.getInstance()!;;
    

    pointBasicArrayList: BasicArrayList;;
    

    nextPoints: std::vector<std::vector<int32_t>>;;
    

    size2: int32_t= 0;;
    

    size: int32_t = points.length
                ;;
    

    pointsBasicArrayList: BasicArrayList = new BasicArrayListS(size);;
    




                        for (
    frame: int32_t = 0;frame < size; frame++)
        {
nextPoints= points[frame]!;
    
size2= nextPoints!.length;
    
pointBasicArrayList= new BasicArrayListS(size2);
    




                        for (
    index: int32_t = 0;index < size2; index++)
        {
pointBasicArrayList!.add(pointFactory!.createXY(nextPoints[index]![0]!, nextPoints[index]![1]!));
    
}

pointsBasicArrayList!.add(pointBasicArrayList);
    
}





                        for (
    index: int32_t = 0;index < points.length; index++)
        {
pointsBasicArrayList!.add(this.getInstance(pointsBasicArrayList!.objectArray[index]! as BasicArrayList, width));
    
}


    newPoints: std::vector<std::vector<std::vector<int32_t>>> = this.vectorAnimationUtil!.toAnimationArrayFromListOfPointList(pointsBasicArrayList)!;;
    



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
            
    public BasicArrayList getInstance(BasicArrayList pointBasicArrayList, int32_t width){

    graphicsPipe: BasicGraphicsPipeline = new BasicGraphicsPipeline(pointBasicArrayList);;
    
graphicsPipe!.createMatrix();
    
graphicsPipe!.mirror(width);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return graphicsPipe!.getMatrix();;
    
}


};

            

