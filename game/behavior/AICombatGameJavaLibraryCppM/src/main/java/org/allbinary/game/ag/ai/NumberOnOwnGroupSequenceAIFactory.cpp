
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NumberInSameGroupSequence.h"
#include "NumberOnOwnGroupSequenceAI.h"

class NumberOnOwnGroupSequenceAIFactory
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

                //@Throws(Exception.constructor)
            
    public ArtificialIntelligenceInterface getInstance(Hashtable<any, any> hashtable, std::vector<ArtificialIntelligenceInterface> artificialIntelligenceInterface, AllBinaryLayer ownerLayerInterface, GameInput gameInput){

    integerArray: std::vector<Integer> = NumberInSameGroupSequence.getInstance()!.NUMBER_ON_SAME_TEAM_SEQUENCE;;
    

    list: BasicArrayList = new BasicArrayListD();;
    




                        for (
    index: int32_t = 0;index < integerArray!.length; index++)
        {

    integerCanBeNull: any = hashtable.get(integerArray[index]!);;
    

                        if(integerCanBeNull == 
                                    null
                                )
                        
                                    {
                                    break;

                    

                                    }
                                
list.add(integerCanBeNull);
    
}


    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Total AI Properties: ");
    
stringBuffer!.appendint(list.size());
    
stringBuffer!.append(" == Total AI: ");
    
stringBuffer!.appendint(artificialIntelligenceInterface!.length);
    
stringBuffer!.append(" + 1");
    

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.putF(stringBuffer!.toString(), this, commonStrings!.GET_INSTANCE);
    

                        if(artificialIntelligenceInterface!.length -1 > list.size())
                        
                                    {
                                    


                            throw new Exception("Not enough AI properties.");
                    

                                    }
                                

                        if(artificialIntelligenceInterface!.length -1 < list.size())
                        
                                    {
                                    


                            throw new Exception("Too Many AI properties.");
                    

                                    }
                                

    numberOnSameTeam: std::vector<Integer> = new Array(list.size());;
    




                        for (
    index: int32_t = 0;index < numberOnSameTeam!.length; index++)
        {
numberOnSameTeam[index]= list.objectArray[index]! as Integer;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new NumberOnOwnGroupSequenceAI(numberOnSameTeam, artificialIntelligenceInterface, ownerLayerInterface, gameInput);
    
}


};

            

