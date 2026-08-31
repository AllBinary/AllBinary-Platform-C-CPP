
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
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class VectorAnimationUtil
            : public Object
         {
        

    private: static const instance: VectorAnimationUtil = new VectorAnimationUtil();

    public static VectorAnimationUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return VectorAnimationUtil.instance;
    
}


private constructor (){

            super();
        }


    public std::vector<std::vector<std::vector<int32_t>>> toAnimationArrayFromListOfPointListWithPointsPerFrame(BasicArrayList vector, int32_t pointsPerFrame){

    size: int32_t = vector.size()!;;
    

    points: std::vector<std::vector<std::vector<int32_t>>> = Array.from({ length: size }, () => Array.from({ length: pointsPerFrame }, () => new Array(0).fill(2)));;
    

    nextBasicArrayList: BasicArrayList;;
    

    framePoints: std::vector<std::vector<int32_t>>;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
nextBasicArrayList= vector.objectArray[index]! as BasicArrayList;
    
framePoints= this.toFrameArrayFromPointBasicArrayList(nextBasicArrayList);
    




                        for (
    pointIndex: int32_t = 0;pointIndex < framePoints!.length; pointIndex++)
        {
points[index]![pointIndex]![0]= framePoints[pointIndex]![0]!;
    
points[index]![pointIndex]![1]= framePoints[pointIndex]![1]!;
    
}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return points;
    
}


    public std::vector<std::vector<std::vector<int32_t>>> toAnimationArrayFromListOfPointList(BasicArrayList vector){

    size: int32_t = vector.size()!;;
    

    points: std::vector<std::vector<std::vector<int32_t>>> = Array.from({ length: size }, () => Array.from({ length: 0 }, () => new Array(0).fill(0)));;
    

    nextBasicArrayList: BasicArrayList;;
    

    framePoints: std::vector<std::vector<int32_t>>;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
nextBasicArrayList= vector.objectArray[index]! as BasicArrayList;
    
framePoints= this.toFrameArrayFromPointBasicArrayList(nextBasicArrayList);
    
points[index]= new Array(framePoints!.length).fill(null).map(() => new Array(2).fill(0));
    




                        for (
    pointIndex: int32_t = 0;pointIndex < framePoints!.length; pointIndex++)
        {
points[index]![pointIndex]![0]= framePoints[pointIndex]![0]!;
    
points[index]![pointIndex]![1]= framePoints[pointIndex]![1]!;
    
}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return points;
    
}


    public std::vector<std::vector<int32_t>> toFrameArrayFromPointBasicArrayList(BasicArrayList list){

    points: std::vector<std::vector<int32_t>> = new Array(list.size()).fill(null).map(() => new Array(2).fill(0));;
    

    size: int32_t = list.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    nextPoint: GPoint = list.objectArray[index]! as GPoint;;
    
points[index]![0]= nextPoint!.getX();
    
points[index]![1]= nextPoint!.getY();
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return points;
    
}


};

            

