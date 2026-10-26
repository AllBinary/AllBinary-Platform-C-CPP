
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
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NumberInSameGroupSequence.h"
#include "NumberOnOwnGroupSequenceAI.h"

class NumberOnOwnGroupSequenceAIFactory
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

                //@Throws(Exception.constructor)
            
    public: ArtificialIntelligenceInterface getInstance(ABHashtable<Object*, Object*> hashtable, std::vector<ArtificialIntelligenceInterface> artificialIntelligenceInterface, AllBinaryLayer ownerLayerInterface, GameInput gameInput){

    std::vector<Integer> integerArray = NumberInSameGroupSequence::getInstance().NUMBER_ON_SAME_TEAM_SEQUENCE;;
    

    BasicArrayList list = BasicArrayListD();;
    




                        for (
    int32_t index = 0;index < integerArray.size(); index++)
        {

    Object* integerCanBeNull = hashtable.get(integerArray[index]);;
    

                        if(integerCanBeNull == 
                                    nullptr
                                )
                        
                                    {
                                    break;

                    

                                    }
                                
list.add(integerCanBeNull);
    
}


    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Total AI Properties: ");
    
stringBuffer.appendint(list.size());
    
stringBuffer.append(" == Total AI: ");
    
stringBuffer.appendint(artificialIntelligenceInterface.size());
    
stringBuffer.append(" + 1");
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.putF(stringBuffer.toString(), this, commonStrings.GET_INSTANCE);
    

                        if(artificialIntelligenceInterface.size() -1 > list.size())
                        
                                    {
                                    


                            throw Exception("Not enough AI properties.");
                    

                                    }
                                

                        if(artificialIntelligenceInterface.size() -1 < list.size())
                        
                                    {
                                    


                            throw Exception("Too Many AI properties.");
                    

                                    }
                                

    std::vector<Integer> numberOnSameTeam = std::vector<Integer>(list.size());;
    




                        for (
    int32_t index = 0;index < numberOnSameTeam.size(); index++)
        {
numberOnSameTeam[index]= list.objectArray[index];
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NumberOnOwnGroupSequenceAI(numberOnSameTeam, artificialIntelligenceInterface, ownerLayerInterface, gameInput);
    
}


};

            

