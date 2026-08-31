
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
        



            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
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
        

    private: i_random: int32_t = 0;

    private: const inputProbability: InputProbability;

    private: const visitor: Visitor;

    private: const keyArray: std::vector<int32_t> = [Canvas.UP,Canvas.DOWN,Canvas.LEFT,Canvas.RIGHT,Canvas.KEY_NUM1,Canvas.KEY_NUM7,Canvas.KEY_NUM9];

public constructor (AllBinaryLayer ownerLayerInterface, GameInput gameInput, InputProbability inputProbability, Visitor visitor){
            super(ownerLayerInterface, gameInput);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.inputProbability= inputProbability;
    
this.visitor= visitor;
    
}


    private: const myRandomFactory: MyRandomFactory = MyRandomFactory.getInstance()!;

                //@Throws(Exception.constructor)
            
    public processAI(AllBinaryLayerManager allBinaryLayerManager){

                        if(this.inputProbability!.getTimeDelayHelper()!.isTime(GameTickTimeDelayHelperFactory.getInstance()!.startTime))
                        
                                    {
                                    this.i_random= this.myRandomFactory!.getAbsoluteNextInt(this.inputProbability!.getMax());
    

    repeat: bool = false;;
    

    repeatLikelyhoodIntegerArray: std::vector<Integer> = this.inputProbability!.getRepeatLikelyhoodIntegerArray()!;;
    

                        if(this.getLastKey() !=  -1 && repeatLikelyhoodIntegerArray[this.getLastKey()]!.intValue() >= this.i_random)
                        
                                    {
                                    repeat= true;
    

                                    }
                                

                        if(!repeat)
                        
                                    {
                                    
    likelyhoodIntegerArray: std::vector<std::vector<Integer>> = this.inputProbability!.getLikelyhoodIntegerArray()!;;
    
this.i_random= this.myRandomFactory!.getAbsoluteNextInt(this.inputProbability!.getMax());
    

    size: int32_t = this.keyArray!.length
                ;;
    

    likelyhoodIntegerKeyArray: std::vector<Integer>;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    key: int32_t = this.keyArray[index]!;;
    
likelyhoodIntegerKeyArray= likelyhoodIntegerArray[key]!;
    

                        if(likelyhoodIntegerArray!.length >= key && likelyhoodIntegerKeyArray[0] != 
                                    null
                                )
                        
                                    {
                                    
                        if(this.i_random >= likelyhoodIntegerKeyArray[0]!.intValue() && this.i_random < likelyhoodIntegerKeyArray[1]!.intValue())
                        
                                    {
                                    this.setLastKey(key);
    
break;

                    

                                    }
                                

                                    }
                                
}


                                    }
                                
this.visitor.visit(this);
    

                                    }
                                
}


};

            

