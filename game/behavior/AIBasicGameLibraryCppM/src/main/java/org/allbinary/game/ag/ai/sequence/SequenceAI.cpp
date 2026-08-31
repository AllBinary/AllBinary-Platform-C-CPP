
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
        
#include <org/allbinary/ai/ArtificialIntelligence.h>

      
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>

      
#include <org/allbinary/ai/ArtificialIntelligenceTransitionInterface.h>

      
#include <org/allbinary/game/ag/ai/ArrayAI.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SequenceAI: public ArrayAI {
        

    private: static const SEQUENCE_AI: string = "Sequence AI";

    private: index: int32_t= 0;

public constructor (std::vector<ArtificialIntelligenceInterface> artificialIntelligenceInterfaceArray, AllBinaryLayer ownerLayerInterface, GameInput gameInput){
            super(artificialIntelligenceInterfaceArray, ownerLayerInterface, gameInput);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public processAI(AllBinaryLayerManager allBinaryLayerManager){
this.getArtificialIntelligenceInterface()[this.index]!.processAI(allBinaryLayerManager);
    
}


    public next(){
this.index++;
    

    artificialIntelligenceInterface: ArtificialIntelligenceInterface = this.getSelectedArtificialIntelligenceInterface()!;;
    

                        if(artificialIntelligenceInterface!.getId() == ArtificialIntelligence.AI_ID)
                        
                                    {
                                    
    artificialIntelligenceTransitionInterface: ArtificialIntelligenceTransitionInterface = artificialIntelligenceInterface as unknown as ArtificialIntelligenceTransitionInterface;;
    
artificialIntelligenceTransitionInterface!.transition();
    

                                    }
                                
}


    public int32_t getIndex(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.index;
    
}


    public setIndex(int32_t index){
this.index= index;
    
}


    public ArtificialIntelligenceInterface getSelectedArtificialIntelligenceInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getArtificialIntelligenceInterface()[this.index]!;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SequenceAI.SEQUENCE_AI;
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(super.toString());
    
stringBuffer!.append(" Selected AI: ");
    
stringBuffer!.append(StringUtil.getInstance()!.toString(this.getSelectedArtificialIntelligenceInterface()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

