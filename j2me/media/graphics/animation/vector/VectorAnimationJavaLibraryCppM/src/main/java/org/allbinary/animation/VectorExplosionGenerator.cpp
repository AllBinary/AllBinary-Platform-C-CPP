
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
        

    private: static const instance: VectorExplosionGenerator = new VectorExplosionGenerator();

    public static VectorExplosionGenerator getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return VectorExplosionGenerator.instance;
    
}


    public const RANDOM: VectorExplosionType = new VectorExplosionType();

    public const ROTATION: VectorExplosionType = new VectorExplosionType();

    private: const vectorAnimationUtil: VectorAnimationUtil = VectorAnimationUtil.getInstance()!;

private constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public BasicArrayList createList(BasicArrayList list, int32_t howMuch, VectorExplosionType type){

    point: GPoint;;
    

    size: int32_t = list.size()!;;
    

    points: std::vector<std::vector<int32_t>> = new Array(size).fill(null).map(() => new Array(2).fill(0));;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
point= list.objectArray[index]! as GPoint;
    
points[index]![0]= point.getX();
    
points[index]![1]= point.getY();
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.createListFromPoints(list, points, howMuch, type);;
    
}


                //@Throws(Exception.constructor)
            
    public std::vector<std::vector<std::vector<int32_t>>> getInstance(std::vector<std::vector<int32_t>> points, int32_t howMuch, VectorExplosionType type){

    pointsBasicArrayList: BasicArrayList = this.getInstanceStartFrame(points, howMuch, type, true)!;;
    

    tempBasicArrayList: BasicArrayList = pointsBasicArrayList!.objectArray[0]! as BasicArrayList;;
    

    newPoints: std::vector<std::vector<std::vector<int32_t>>> = this.vectorAnimationUtil!.toAnimationArrayFromListOfPointListWithPointsPerFrame(pointsBasicArrayList, tempBasicArrayList!.size())!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newPoints;
    
}


                //@Throws(Exception.constructor)
            
    public BasicArrayList getInstanceStartFrame(std::vector<std::vector<int32_t>> points, int32_t howMuch, VectorExplosionType type, bool startFrame){

        try {
            
    pointsBasicArrayList: BasicArrayList = new BasicArrayListS(howMuch);;
    
pointsBasicArrayList!.add(this.createPointsBasicArrayList(points));
    

    frameIndex: int32_t = 0;;
    

    tempBasicArrayList: BasicArrayList;;
    

    pointBasicArrayList: BasicArrayList;;
    

        while(frameIndex < howMuch)
        {
tempBasicArrayList= pointsBasicArrayList!.objectArray[frameIndex]! as BasicArrayList;
    
pointBasicArrayList= this.createListFromPoints(tempBasicArrayList, points, howMuch, type);
    
pointsBasicArrayList!.add(pointBasicArrayList);
    
frameIndex++;
    
}


                        if(!startFrame)
                        
                                    {
                                    pointsBasicArrayList!.removeAt(0);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pointsBasicArrayList;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

}


    private: const randomRotationFactory: RandomRotationFactory = RandomRotationFactory.getInstance()!;

                //@Throws(Exception.constructor)
            
    BasicArrayList createListFromPoints(BasicArrayList tempBasicArrayList, std::vector<std::vector<int32_t>> points, int32_t howMuch, VectorExplosionType type){

    index: int32_t = 0;;
    

    pointBasicArrayList: BasicArrayList = new BasicArrayListD();;
    

    sectionBasicArrayList: BasicArrayList;;
    

        while(index < points.length)
        {
sectionBasicArrayList= new BasicArrayListD();
    

        while(points[index]![0] != 1000)
        {
sectionBasicArrayList!.add(tempBasicArrayList!.objectArray[index]!);
    
index++;
    

                        if(index >= points.length)
                        
                                    {
                                    break;

                    

                                    }
                                
}

sectionBasicArrayList= RandomTranslation.getInstance(sectionBasicArrayList, howMuch);
    

                        if(type == this.ROTATION)
                        
                                    {
                                    sectionBasicArrayList= this.randomRotationFactory!.getInstanceList(sectionBasicArrayList, howMuch);
    

                                    }
                                

    size: int32_t = sectionBasicArrayList!.size()!;;
    




                        for (
    index2: int32_t = 0;index2 < size; index2++)
        {
pointBasicArrayList!.add(sectionBasicArrayList!.objectArray[index2]!);
    
}


                        if(index >= points.length)
                        
                                    {
                                    break;

                    

                                    }
                                
                             else 
                        if(points[index]![0] == 1000)
                        
                                    {
                                    pointBasicArrayList!.add(tempBasicArrayList!.objectArray[index]!);
    
index++;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pointBasicArrayList;
    
}


                //@Throws(Exception.constructor)
            
    BasicArrayList createPointsBasicArrayList(std::vector<std::vector<int32_t>> points){

                        if(points.length == 0)
                        
                                    {
                                    


                            throw new Exception("Not Points Provided");
                    

                                    }
                                

    firstPointBasicArrayList: BasicArrayList = new BasicArrayListS(points.length);;
    

    pointFactory: PointFactory = PointFactory.getInstance()!;;
    




                        for (
    index: int32_t = 0;index < points.length; index++)
        {
firstPointBasicArrayList!.add(pointFactory!.createXY(points[index]![0]!, points[index]![1]!));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return firstPointBasicArrayList;
    
}


};

            

