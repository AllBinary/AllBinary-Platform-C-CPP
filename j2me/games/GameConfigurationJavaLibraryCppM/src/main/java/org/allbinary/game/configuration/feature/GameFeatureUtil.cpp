
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
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Enumeration.h>

      
#include <java/util/Hashtable.h>

      
#include <javax/microedition/lcdui/ChoiceGroup.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/EnumerationUtil.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Features.h"
#include "Feature.h"
#include "GameFeatureChoiceGroups.h"

class GameFeatureUtil
            : public Object
         {
        

    private: static const instance: GameFeatureUtil = new GameFeatureUtil();

    public static GameFeatureUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameFeatureUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const tsUtil: TsUtil = TsUtil.getInstance()!;

    private: const enumerationUtil: EnumerationUtil = EnumerationUtil.getInstance()!;

    public const ON_GAME_FEATURE_CHANGE: string = "onGameFeatureChange";

    public const GAME_FEATURE_CHANGED: string = "Game Feature Changed: ";

                //@Throws(Exception.constructor)
            
    public setDefault(ChoiceGroup choiceGroup){

    stringBuffer: StringMaker = new StringMaker();;
    

    METHOD_NAME: string = "setDefault";;
    

    SELECTED_ARRAY_RETURN: string = "selectedArray_return[";;
    

    SELECTED_SEP: string = "] = ";;
    

    selectedArray_return: std::vector<bool> = new Array(choiceGroup!.size());;
    

    total: int32_t = choiceGroup!.getSelectedFlags(selectedArray_return)!;;
    
stringBuffer!.append("Multiple Total Choices: ");
    
stringBuffer!.appendint(total);
    
this.logUtil!.putF(stringBuffer!.toString(), this, METHOD_NAME);
    

    features: Features = Features.getInstance()!;;
    




                        for (
    index: int32_t = 0;index < selectedArray_return!.length; index++)
        {

    isSelected: bool = selectedArray_return[index]!;;
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(SELECTED_ARRAY_RETURN);
    
stringBuffer!.appendint(index);
    
stringBuffer!.append(SELECTED_SEP);
    
stringBuffer!.appendboolean(isSelected);
    
this.logUtil!.putF(stringBuffer!.toString(), this, METHOD_NAME);
    

    selectedChoiceLabel: string = choiceGroup!.getString(index)!;;
    

    gameFeature: Feature = Feature.getInstance(selectedChoiceLabel)!;;
    

                        if(features.isDefault(gameFeature))
                        
                                    {
                                    features.add(gameFeature);
    
choiceGroup!.setSelectedIndex(index, true);
    

                                    }
                                
                        else {
                            features.remove(gameFeature);
    
choiceGroup!.setSelectedIndex(index, false);
    

                        }
                            
}

}


                //@Throws(Exception.constructor)
            
    public updateMultiple(ChoiceGroup choiceGroup){

    stringBuffer: StringMaker = new StringMaker();;
    

    METHOD_NAME: string = "updateMultiple";;
    

    SELECTED_ARRAY_RETURN: string = "selectedArray_return[";;
    

    SELECTED_SEP: string = "] = ";;
    

    selectedArray_return: std::vector<bool> = new Array(choiceGroup!.size());;
    

    total: int32_t = choiceGroup!.getSelectedFlags(selectedArray_return)!;;
    
stringBuffer!.append("Multiple Total Choices: ");
    
stringBuffer!.appendint(total);
    
this.logUtil!.putF(stringBuffer!.toString(), this, METHOD_NAME);
    

    features: Features = Features.getInstance()!;;
    




                        for (
    index: int32_t = 0;index < selectedArray_return!.length; index++)
        {

    isSelected: bool = selectedArray_return[index]!;;
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(SELECTED_ARRAY_RETURN);
    
stringBuffer!.appendint(index);
    
stringBuffer!.append(SELECTED_SEP);
    
stringBuffer!.appendboolean(isSelected);
    
this.logUtil!.putF(stringBuffer!.toString(), this, METHOD_NAME);
    

    selectedChoiceLabel: string = choiceGroup!.getString(index)!;;
    

    gameFeature: Feature = Feature.getInstance(selectedChoiceLabel)!;;
    

                        if(!isSelected && features.isFeature(gameFeature))
                        
                                    {
                                    features.remove(gameFeature);
    

                                    }
                                
                             else 
                        if(isSelected && !features.isFeature(gameFeature))
                        
                                    {
                                    features.add(gameFeature);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    public updateExclusiveForChoiceGroup(ChoiceGroup choiceGroup){

    stringBuffer: StringMaker = new StringMaker();;
    

    METHOD_NAME: string = "updateExclusive";;
    

    SELECTED_ARRAY_RETURN: string = "selectedArray_return[";;
    

    SELECTED_SEP: string = "] = ";;
    

    selectedArray_return: std::vector<bool> = new Array(choiceGroup!.size());;
    

    total: int32_t = choiceGroup!.getSelectedFlags(selectedArray_return)!;;
    
stringBuffer!.append("Exclusive Total Choices: 1==");
    
stringBuffer!.appendint(total);
    
this.logUtil!.putF(stringBuffer!.toString(), this, METHOD_NAME);
    




                        for (
    index: int32_t = 0;index < selectedArray_return!.length; index++)
        {

    isSelected: bool = selectedArray_return[index]!;;
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(SELECTED_ARRAY_RETURN);
    
stringBuffer!.appendint(index);
    
stringBuffer!.append(SELECTED_SEP);
    
stringBuffer!.appendboolean(isSelected);
    
this.logUtil!.putF(stringBuffer!.toString(), this, METHOD_NAME);
    

                        if(isSelected)
                        
                                    {
                                    
    selectedChoiceLabel: string = choiceGroup!.getString(index)!;;
    
this.updateExclusive(selectedChoiceLabel);
    

                                    }
                                
}

}


    public bool isExclusive(string itemLabel){

    enumeration: Enumeration<any> = GameFeatureChoiceGroups.getExclusiveInstance()!.get()!.keys()!;;
    

    name: string;;
    

        while(this.enumerationUtil!.hasMoreElements(enumeration))
        {
name= this.enumerationUtil!.nextElement(enumeration)! as string;
    

                        if(this.tsUtil!.compareTo(itemLabel, name) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    updateExclusive(string selectedChoiceLabel){
this.logUtil!.putF(new StringMaker().append(CommonLabels.getInstance()!.ITEM_LABEL)!.append(selectedChoiceLabel)!.toString(), this, "updateExclusive");
    

    gameFeature: Feature = Feature.getInstance(selectedChoiceLabel)!;;
    

    hashtable: Hashtable<any, any> = GameFeatureChoiceGroups.getExclusiveInstance()!.get()!;;
    

    objectArray: std::vector<any> = HashtableUtil.getInstance()!.getKeysAsArray(hashtable)!;;
    

    basicArrayList: BasicArrayList;;
    

    anyType: any;;
    

    size: int32_t = objectArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
anyType= objectArray[index]!;
    
basicArrayList= hashtable.get(anyType) as BasicArrayList;
    
this.updateExclusiveList(gameFeature, basicArrayList);
    
}

}


                //@Throws(Exception.constructor)
            
    public updateExclusiveList(Feature gameFeature, BasicArrayList list){

                        if(list.contains(gameFeature))
                        
                                    {
                                    
    features: Features = Features.getInstance()!;;
    

    addIndex: int32_t = list.indexOf(gameFeature)!;;
    

    size: int32_t = list.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

                        if(addIndex != index)
                        
                                    {
                                    features.remove(list.objectArray[index]! as Feature);
    

                                    }
                                
                        else {
                            features.add(list.objectArray[index]! as Feature);
    

                        }
                            
}


                                    }
                                
}


};

            

