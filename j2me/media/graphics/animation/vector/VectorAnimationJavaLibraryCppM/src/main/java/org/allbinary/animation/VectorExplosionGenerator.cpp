
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
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/pipeline/RandomRotationFactory.h>

      
#include <org/allbinary/graphics/pipeline/RandomTranslation.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "VectorExplosionType.h"
#include "VectorAnimationUtil.h"

class VectorExplosionGenerator
            : public Object
         {

    private: static VectorExplosionGenerator instance() { return VectorExplosionGenerator(); }

    public: static VectorExplosionGenerator getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return VectorExplosionGenerator::instance();
    
}


    public: const VectorExplosionType RANDOM = VectorExplosionType();

    public: const VectorExplosionType ROTATION = VectorExplosionType();

    private: const VectorAnimationUtil vectorAnimationUtil = VectorAnimationUtil::getInstance();

private: VectorExplosionGenerator(){
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList createList(BasicArrayList list, int32_t howMuch, VectorExplosionType type){

    GPoint point;;
    

    int32_t size = list.size();;
    

    std::vector<std::vector<int32_t>> points = std::vector<std::vector<int32_t>>(size, std::vector<int32_t>(2));;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
point= list.objectArray[index];
    
points[index][0]= point.getX();
    
points[index][1]= point.getY();
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->createListFromPoints(list, points, howMuch, type);;
    
}


                //@Throws(Exception.constructor)
            
    public: std::vector<std::vector<std::vector<int32_t>>> getInstance(std::vector<std::vector<int32_t>> points, int32_t howMuch, VectorExplosionType type){

    BasicArrayList pointsBasicArrayList = this->getInstanceStartFrame(points, howMuch, type, true);;
    

    BasicArrayList tempBasicArrayList = pointsBasicArrayList.objectArray[0];;
    

    std::vector<std::vector<std::vector<int32_t>>> newPoints = this->vectorAnimationUtil.toAnimationArrayFromListOfPointListWithPointsPerFrame(pointsBasicArrayList, tempBasicArrayList.size());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newPoints;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList getInstanceStartFrame(std::vector<std::vector<int32_t>> points, int32_t howMuch, VectorExplosionType type, bool startFrame){

        try {
            
    BasicArrayList pointsBasicArrayList = BasicArrayListS(howMuch);;
    
pointsBasicArrayList.add(this->createPointsBasicArrayList(points));
    

    int32_t frameIndex = 0;;
    

    BasicArrayList tempBasicArrayList;;
    

    BasicArrayList pointBasicArrayList;;
    

        while(frameIndex < howMuch)
        {
tempBasicArrayList= pointsBasicArrayList.objectArray[frameIndex];
    
pointBasicArrayList= this->createListFromPoints(tempBasicArrayList, points, howMuch, type);
    
pointsBasicArrayList.add(pointBasicArrayList);
    
frameIndex++;
    
}


                        if(!startFrame)
                        
                                    {
                                    pointsBasicArrayList.removeAt(0);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pointsBasicArrayList;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

}


    private: const RandomRotationFactory randomRotationFactory = RandomRotationFactory::getInstance();

                //@Throws(Exception.constructor)
            
    private: BasicArrayList createListFromPoints(BasicArrayList tempBasicArrayList, std::vector<std::vector<int32_t>> points, int32_t howMuch, VectorExplosionType type){

    int32_t index = 0;;
    

    BasicArrayList pointBasicArrayList = BasicArrayListD();;
    

    BasicArrayList sectionBasicArrayList;;
    

        while(index < points.size())
        {
sectionBasicArrayList= BasicArrayListD();
    

        while(points[index][0] != 1000)
        {
sectionBasicArrayList.add(tempBasicArrayList.objectArray[index]);
    
index++;
    

                        if(index >= points.size())
                        
                                    {
                                    break;

                    

                                    }
                                
}

sectionBasicArrayList= RandomTranslation::getInstance(sectionBasicArrayList, howMuch);
    

                        if(type == this->ROTATION)
                        
                                    {
                                    sectionBasicArrayList= this->randomRotationFactory.getInstanceList(sectionBasicArrayList, howMuch);
    

                                    }
                                

    int32_t size = sectionBasicArrayList.size();;
    




                        for (
    int32_t index2 = 0;index2 < size; index2++)
        {
pointBasicArrayList.add(sectionBasicArrayList.objectArray[index2]);
    
}


                        if(index >= points.size())
                        
                                    {
                                    break;

                    

                                    }
                                
                             else 
                        if(points[index][0] == 1000)
                        
                                    {
                                    pointBasicArrayList.add(tempBasicArrayList.objectArray[index]);
    
index++;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pointBasicArrayList;
    
}


                //@Throws(Exception.constructor)
            
    private: BasicArrayList createPointsBasicArrayList(std::vector<std::vector<int32_t>> points){

                        if(points.size() == 0)
                        
                                    {
                                    


                            throw Exception("Not Points Provided");
                    

                                    }
                                

    BasicArrayList firstPointBasicArrayList = BasicArrayListS(points.size());;
    

    PointFactory pointFactory = PointFactory::getInstance();;
    




                        for (
    int32_t index = 0;index < points.size(); index++)
        {
firstPointBasicArrayList.add(pointFactory.createXY(points[index][0], points[index][1]));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return firstPointBasicArrayList;
    
}


};

            

