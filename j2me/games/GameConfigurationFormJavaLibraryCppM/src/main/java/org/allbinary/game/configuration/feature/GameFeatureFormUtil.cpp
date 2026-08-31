
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
        
#include <java/util/Hashtable.h>

      
#include <javax/microedition/lcdui/ChoiceGroup.h>

      
#include <javax/microedition/lcdui/Item.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/game/configuration/GameConfigurationGauge.h>

      
#include <org/allbinary/game/configuration/GameConfigurationUtil.h>

      
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Features.h"
#include "Feature.h"
#include "GameFeatureUtil.h"

class GameFeatureFormUtil
            : public Object
         {
        

    private: static const instance: GameFeatureFormUtil = new GameFeatureFormUtil();

    public static GameFeatureFormUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameFeatureFormUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    public ChoiceGroup getChoiceGroup(Hashtable<any, any> hashtable, string name, int32_t option){

    stringMaker: StringMaker = new StringMaker();;
    

    choiceGroup: ChoiceGroup = new ChoiceGroup(name, option, StringUtil.getInstance()!.getArrayInstance(), NullImage.NULL_IMAGE_ARRAY);;
    

    list: BasicArrayList = hashtable.get(name) as BasicArrayList;;
    

    features: Features = Features.getInstance()!;;
    

    ADD_CHOICE: string = ": Adding Choice: ";;
    

    GET_CHOICE_GROUP: string = "getChoiceGroup";;
    

    size: int32_t = list.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    gameFeature: Feature = list.objectArray[index]! as Feature;;
    
stringMaker!.delete(0, stringMaker!.length());
    
this.logUtil!.putF(stringMaker!.append(name)!.append(ADD_CHOICE)!.append(gameFeature!.toString())!.toString(), this, GET_CHOICE_GROUP);
    
choiceGroup!.append(gameFeature!.toString(), NullImage.NULL_IMAGE);
    

                        if(features.isFeature(gameFeature))
                        
                                    {
                                    choiceGroup!.setSelectedIndex(index, true);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return choiceGroup;
    
}


    public addChoiceGroup(CommandForm form, Hashtable<any, any> hashtable, int32_t option){

    stringMaker: StringMaker = new StringMaker();;
    

    ADDING_CHOICE_GROUP: string = "Adding Choice Group: ";;
    

    ADD_CHOICE_GROUP: string = "addChoiceGroup";;
    

    size: int32_t = hashtable.length!;;
    

    objectArray: std::vector<any> = HashtableUtil.getInstance()!.getKeysAsArray(hashtable)!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    name: string = objectArray[index]! as string;;
    
stringMaker!.delete(0, stringMaker!.length());
    
this.logUtil!.putF(stringMaker!.append(ADDING_CHOICE_GROUP)!.append(name)!.toString(), this, ADD_CHOICE_GROUP);
    
form.append(this.getChoiceGroup(hashtable, name, option));
    
}

}


                //@Throws(Exception.constructor)
            
    public setDefault(CommandForm form){

    size: int32_t = form.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    item: Item = form.get(index)!;;
    

                        if(item instanceof GameConfigurationGauge)
                        
                                    {
                                    GameConfigurationUtil.getInstance()!.setDefault(item as GameConfigurationGauge);
    

                                    }
                                
                             else 
                        if(item instanceof ChoiceGroup)
                        
                                    {
                                    GameFeatureUtil.getInstance()!.setDefault(item as ChoiceGroup);
    

                                    }
                                
}

}


};

            

