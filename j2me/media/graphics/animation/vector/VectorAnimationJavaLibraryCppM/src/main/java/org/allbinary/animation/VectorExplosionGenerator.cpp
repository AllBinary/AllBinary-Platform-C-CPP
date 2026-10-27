
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/animation/VectorExplosionType.h"
#include "org/allbinary/animation/VectorAnimationUtil.h"

class VectorExplosionGenerator
            : public Object
         {

    private: static VectorExplosionGenerator* instance() { static std::unique_ptr<VectorExplosionGenerator> value(new VectorExplosionGenerator()); return value.get(); }

    public: static VectorExplosionGenerator* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return VectorExplosionGenerator::instance();
    
}


    public: VectorExplosionType* RANDOM = new VectorExplosionType();

    public: VectorExplosionType* ROTATION = new VectorExplosionType();

    private: VectorAnimationUtil* vectorAnimationUtil = VectorAnimationUtil::getInstance();

private: VectorExplosionGenerator(){
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList* createList(BasicArrayList* list, int32_t howMuch, VectorExplosionType* type){

    GPoint* point;;
    

    int32_t size = list->size();;
    

    std::vector<std::vector<int32_t>> points = std::vector<std::vector<int32_t>>(size, std::vector<int32_t>(2));;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
point= dynamic_cast<GPoint*>(list->objectArray[index]);
    
points[index][0]= point->getX();
    
points[index][1]= point->getY();
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->createListFromPoints(list, points, howMuch, type);;
    
}


                //@Throws(Exception.constructor)
            
    public: std::vector<std::vector<std::vector<int32_t>>> getInstance(std::vector<std::vector<int32_t>> points, int32_t howMuch, VectorExplosionType* type){

    BasicArrayList* pointsBasicArrayList = this->getInstanceStartFrame(points, howMuch, type, true);;
    

    BasicArrayList* tempBasicArrayList = dynamic_cast<BasicArrayList*>(pointsBasicArrayList->objectArray[0]);;
    

    std::vector<std::vector<std::vector<int32_t>>> newPoints = this->vectorAnimationUtil->toAnimationArrayFromListOfPointListWithPointsPerFrame(pointsBasicArrayList, tempBasicArrayList->size());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newPoints;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getInstanceStartFrame(std::vector<std::vector<int32_t>> points, int32_t howMuch, VectorExplosionType* type, bool startFrame){

        try {
            
    BasicArrayList* pointsBasicArrayList = new BasicArrayListS(howMuch);;
    
pointsBasicArrayList->add(this->createPointsBasicArrayList(points));
    

    int32_t frameIndex = 0;;
    

    BasicArrayList* tempBasicArrayList;;
    

    BasicArrayList* pointBasicArrayList;;
    

        while(frameIndex < howMuch)
        {
tempBasicArrayList= dynamic_cast<BasicArrayList*>(pointsBasicArrayList->objectArray[frameIndex]);
    
pointBasicArrayList= this->createListFromPoints(tempBasicArrayList, points, howMuch, type);
    
pointsBasicArrayList->add(pointBasicArrayList);
    
frameIndex++;
    
}


                        if(!startFrame)
                        
                                    {
                                    pointsBasicArrayList->removeAt(0);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pointsBasicArrayList;
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}


    private: RandomRotationFactory* randomRotationFactory = RandomRotationFactory::getInstance();

                //@Throws(Exception.constructor)
            
    private: BasicArrayList* createListFromPoints(BasicArrayList* tempBasicArrayList, std::vector<std::vector<int32_t>> points, int32_t howMuch, VectorExplosionType* type){

    int32_t index = 0;;
    

    BasicArrayList* pointBasicArrayList = new BasicArrayListD();;
    

    BasicArrayList* sectionBasicArrayList;;
    

        while(index < points.size())
        {
sectionBasicArrayList= new BasicArrayListD();
    

        while(points[index][0] != 1000)
        {
sectionBasicArrayList->add(tempBasicArrayList->objectArray[index]);
    
index++;
    

                        if(index >= points.size())
                        
                                    {
                                    break;

                    

                                    }
                                
}

sectionBasicArrayList= RandomTranslation::getInstance(sectionBasicArrayList, howMuch);
    

                        if(type == this->ROTATION)
                        
                                    {
                                    sectionBasicArrayList= this->randomRotationFactory->getInstanceList(sectionBasicArrayList, howMuch);
    

                                    }
                                

    int32_t size = sectionBasicArrayList->size();;
    




                        for (
    int32_t index2 = 0;index2 < size; index2++)
        {
pointBasicArrayList->add(sectionBasicArrayList->objectArray[index2]);
    
}


                        if(index >= points.size())
                        
                                    {
                                    break;

                    

                                    }
                                
                             else 
                        if(points[index][0] == 1000)
                        
                                    {
                                    pointBasicArrayList->add(tempBasicArrayList->objectArray[index]);
    
index++;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pointBasicArrayList;
    
}


                //@Throws(Exception.constructor)
            
    private: BasicArrayList* createPointsBasicArrayList(std::vector<std::vector<int32_t>> points){

                        if(points.size() == 0)
                        
                                    {
                                    


                            throw new Exception("Not Points Provided");
                    

                                    }
                                

    BasicArrayList* firstPointBasicArrayList = new BasicArrayListS(points.size());;
    

    PointFactory* pointFactory = PointFactory::getInstance();;
    




                        for (
    int32_t index = 0;index < points.size(); index++)
        {
firstPointBasicArrayList->add(pointFactory->createXY(points[index][0], points[index][1]));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return firstPointBasicArrayList;
    
}


};

            

