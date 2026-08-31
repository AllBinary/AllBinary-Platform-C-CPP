
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
        



            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>

      
#include <org/allbinary/game/ag/ai/sequence/SequenceAI.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/game/layer/identification/GroupLayerManagerListener.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class NumberOnOwnGroupSequenceAI: public SequenceAI {
        

    private: numberOnSameTeam: std::vector<Integer>;

public constructor (std::vector<Integer> numberOnSameTeam, std::vector<ArtificialIntelligenceInterface> artificialIntelligenceInterface, AllBinaryLayer ownerLayerInterface, GameInput gameInput){
            super(artificialIntelligenceInterface, ownerLayerInterface, gameInput);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.numberOnSameTeam= numberOnSameTeam;
    
}


                //@Throws(Exception.constructor)
            
    public processAI(AllBinaryLayerManager allBinaryLayerManager){

    layerInterface: AllBinaryLayer = this.getOwnerLayerInterface()!;;
    

    index: int32_t = this.getIndex()!;;
    

                        if(this.numberOnSameTeam!.length > index)
                        
                                    {
                                    
    size: int32_t = GroupLayerManagerListener.getInstance()!.getGroupSizeFromInterface(layerInterface)!;;
    

                        if(this.numberOnSameTeam[index]!.intValue() > size)
                        
                                    {
                                    this.next();
    

                                    }
                                

                                    }
                                
super.processAI(allBinaryLayerManager);
    
}


};

            

