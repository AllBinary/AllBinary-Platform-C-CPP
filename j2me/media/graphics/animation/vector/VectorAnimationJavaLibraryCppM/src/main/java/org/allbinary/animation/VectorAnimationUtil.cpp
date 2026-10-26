
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class VectorAnimationUtil
            : public Object
         {

    private: static VectorAnimationUtil instance() { return VectorAnimationUtil(); }

    public: static VectorAnimationUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return VectorAnimationUtil::instance();
    
}


private: VectorAnimationUtil(){
}


    public: std::vector<std::vector<std::vector<int32_t>>> toAnimationArrayFromListOfPointListWithPointsPerFrame(BasicArrayList vector, int32_t pointsPerFrame){

    int32_t size = vector.size();;
    

    std::vector<std::vector<std::vector<int32_t>>> points = std::vector<std::vector<std::vector<int32_t>>>(size, std::vector<std::vector<int32_t>>(pointsPerFrame, std::vector<int32_t>(2)));;
    

    BasicArrayList nextBasicArrayList;;
    

    std::vector<std::vector<int32_t>> framePoints;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
nextBasicArrayList= vector.objectArray[index];
    
framePoints= this->toFrameArrayFromPointBasicArrayList(nextBasicArrayList);
    




                        for (
    int32_t pointIndex = 0;pointIndex < framePoints.size(); pointIndex++)
        {
points[index][pointIndex][0]= framePoints[pointIndex][0];
    
points[index][pointIndex][1]= framePoints[pointIndex][1];
    
}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return points;
    
}


    public: std::vector<std::vector<std::vector<int32_t>>> toAnimationArrayFromListOfPointList(BasicArrayList vector){

    int32_t size = vector.size();;
    

    std::vector<std::vector<std::vector<int32_t>>> points = std::vector<std::vector<std::vector<int32_t>>>(size, std::vector<std::vector<int32_t>>(0, std::vector<int32_t>(0)));;
    

    BasicArrayList nextBasicArrayList;;
    

    std::vector<std::vector<int32_t>> framePoints;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
nextBasicArrayList= vector.objectArray[index];
    
framePoints= this->toFrameArrayFromPointBasicArrayList(nextBasicArrayList);
    
points[index]= std::vector<std::vector<int32_t>>(framePoints.length, std::vector<int32_t>(2));
    




                        for (
    int32_t pointIndex = 0;pointIndex < framePoints.size(); pointIndex++)
        {
points[index][pointIndex][0]= framePoints[pointIndex][0];
    
points[index][pointIndex][1]= framePoints[pointIndex][1];
    
}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return points;
    
}


    public: std::vector<std::vector<int32_t>> toFrameArrayFromPointBasicArrayList(BasicArrayList list){

    std::vector<std::vector<int32_t>> points = std::vector<std::vector<int32_t>>(list.size(), std::vector<int32_t>(2));;
    

    int32_t size = list.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GPoint nextPoint = list.objectArray[index];;
    
points[index][0]= nextPoint.getX();
    
points[index][1]= nextPoint.getY();
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return points;
    
}


};

            

