
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
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/ai/BasicAI.h>

      
#include <org/allbinary/game/ag/ai/InputProbability.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/game/rand/MyRandomFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicRandomAI: public BasicAI {

    private: int32_t i_random = 0;

    private: InputProbability inputProbability;

    private: Visitor visitor;

    private: const std::vector<int32_t> keyArray = {Canvas::UP,Canvas::DOWN,Canvas::LEFT,Canvas::RIGHT,Canvas::KEY_NUM1,Canvas::KEY_NUM7,Canvas::KEY_NUM9};

public: BasicRandomAI(AllBinaryLayer ownerLayerInterface, GameInput gameInput, InputProbability inputProbability, Visitor visitor) : BasicAI(ownerLayerInterface, gameInput){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->inputProbability= inputProbability;
    
this->visitor= visitor;
    
}


    private: const MyRandomFactory myRandomFactory = MyRandomFactory::getInstance();

                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager allBinaryLayerManager){

                        if(this->inputProbability.getTimeDelayHelper().isTime(GameTickTimeDelayHelperFactory::getInstance().startTime))
                        
                                    {
                                    this->i_random= this->myRandomFactory.getAbsoluteNextInt(this->inputProbability.getMax());
    

    bool repeat = false;;
    

    std::vector<Integer> repeatLikelyhoodIntegerArray = this->inputProbability.getRepeatLikelyhoodIntegerArray();;
    

                        if(this->getLastKey() !=  -1 && repeatLikelyhoodIntegerArray[this->getLastKey()].intValue() >= this->i_random)
                        
                                    {
                                    repeat= true;
    

                                    }
                                

                        if(!repeat)
                        
                                    {
                                    
    std::vector<std::vector<Integer>> likelyhoodIntegerArray = this->inputProbability.getLikelyhoodIntegerArray();;
    
this->i_random= this->myRandomFactory.getAbsoluteNextInt(this->inputProbability.getMax());
    

    int32_t size = this->keyArray.size();;
    

    std::vector<Integer> likelyhoodIntegerKeyArray;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    int32_t key = this->keyArray[index];;
    
likelyhoodIntegerKeyArray= likelyhoodIntegerArray[key];
    

                        if(likelyhoodIntegerArray.size() >= key && likelyhoodIntegerKeyArray[0] != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(this->i_random >= likelyhoodIntegerKeyArray[0].intValue() && this->i_random < likelyhoodIntegerKeyArray[1].intValue())
                        
                                    {
                                    this->setLastKey(key);
    
break;

                    

                                    }
                                

                                    }
                                
}


                                    }
                                
this->visitor.visit(this);
    

                                    }
                                
}


};

            

