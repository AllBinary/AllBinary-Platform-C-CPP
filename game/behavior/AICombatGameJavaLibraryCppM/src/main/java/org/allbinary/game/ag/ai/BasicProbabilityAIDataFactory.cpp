
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
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/time/NoTimeDelayHelper.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InputProbability.h"

class BasicProbabilityAIDataFactory
            : public Object
         {

    public: ABHashtable<Object*, Object*> getInstance(){

    std::vector<std::vector<Integer>> likelyhoodIntegerArray = std::vector<std::vector<Integer>>(Canvas::KEY_NUM9 +1, std::vector<Integer>(2));;
    

    SmallIntegerSingletonFactory smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();;
    
likelyhoodIntegerArray[Canvas::UP][0]= smallIntegerSingletonFactory.getAt(0);
    
likelyhoodIntegerArray[Canvas::UP][1]= smallIntegerSingletonFactory.getAt(10);
    
likelyhoodIntegerArray[Canvas::DOWN][0]= smallIntegerSingletonFactory.getAt(10);
    
likelyhoodIntegerArray[Canvas::DOWN][1]= smallIntegerSingletonFactory.getAt(14);
    
likelyhoodIntegerArray[Canvas::LEFT][0]= smallIntegerSingletonFactory.getAt(14);
    
likelyhoodIntegerArray[Canvas::LEFT][1]= smallIntegerSingletonFactory.getAt(18);
    
likelyhoodIntegerArray[Canvas::RIGHT][0]= smallIntegerSingletonFactory.getAt(18);
    
likelyhoodIntegerArray[Canvas::RIGHT][1]= smallIntegerSingletonFactory.getAt(22);
    
likelyhoodIntegerArray[Canvas::KEY_NUM7][0]= smallIntegerSingletonFactory.getAt(22);
    
likelyhoodIntegerArray[Canvas::KEY_NUM7][1]= smallIntegerSingletonFactory.getAt(26);
    
likelyhoodIntegerArray[Canvas::KEY_NUM9][0]= smallIntegerSingletonFactory.getAt(26);
    
likelyhoodIntegerArray[Canvas::KEY_NUM9][1]= smallIntegerSingletonFactory.getAt(30);
    
likelyhoodIntegerArray[Canvas::KEY_NUM1][0]= smallIntegerSingletonFactory.getAt(30);
    
likelyhoodIntegerArray[Canvas::KEY_NUM1][1]= smallIntegerSingletonFactory.getAt(40);
    

    std::vector<Integer> repeatLikelyhoodIntegerArray = std::vector<Integer>(Canvas::KEY_NUM9 +1);;
    
repeatLikelyhoodIntegerArray[Canvas::UP]= smallIntegerSingletonFactory.getAt(0);
    
repeatLikelyhoodIntegerArray[Canvas::DOWN]= smallIntegerSingletonFactory.getAt(0);
    
repeatLikelyhoodIntegerArray[Canvas::LEFT]= smallIntegerSingletonFactory.getAt(0);
    
repeatLikelyhoodIntegerArray[Canvas::RIGHT]= smallIntegerSingletonFactory.getAt(0);
    
repeatLikelyhoodIntegerArray[Canvas::KEY_NUM7]= smallIntegerSingletonFactory.getAt(0);
    
repeatLikelyhoodIntegerArray[Canvas::KEY_NUM9]= smallIntegerSingletonFactory.getAt(0);
    
repeatLikelyhoodIntegerArray[Canvas::KEY_NUM1]= smallIntegerSingletonFactory.getAt(10);
    

    InputProbability inputProbability = InputProbability(likelyhoodIntegerArray, repeatLikelyhoodIntegerArray, 42, NoTimeDelayHelper::SINGLETON);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inputProbability.toHashtable();;
    
}


};

            

