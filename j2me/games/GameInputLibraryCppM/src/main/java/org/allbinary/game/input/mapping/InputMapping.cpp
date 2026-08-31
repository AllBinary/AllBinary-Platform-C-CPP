
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

      
#include <java/util/Hashtable.h>

      
#include <org/allbinary/game/input/Input.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InputToGameKeyMapping.h"

class InputMapping
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const hashtable: Hashtable<any, any> = new Hashtable<any, any>();

    private: const mappedList: BasicArrayList = new BasicArrayListD();

protected constructor (){

            super();
        }


    public int32_t getTotalMapped(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hashtable.length;;
    
}


    bool isDefaultNew(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    InputToGameKeyMapping getDefault(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputToGameKeyMapping.getNullInstance();;
    
}


    removeAll(){
this.hashtable.clear();
    
this.mappedList!.clear();
    
}


    public remove(Input input, Input mappedToInput){

    stringBuffer: StringMaker = new StringMaker();;
    

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    
stringBuffer!.append(CommonLabels.getInstance()!.START_LABEL);
    
stringBuffer!.append(stringUtil!.toString(input));
    
stringBuffer!.append(" == ");
    
stringBuffer!.append(stringUtil!.toString(mappedToInput));
    
this.logUtil!.putF(stringBuffer!.toString(), this, "InputMapping::remove");
    

    list: BasicArrayList = this.getMappedInput(input)!;;
    

                        if(list.contains(mappedToInput))
                        
                                    {
                                    list.remove(mappedToInput);
    
this.mappedList!.remove(mappedToInput);
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append("Removed: ");
    
stringBuffer!.append(stringUtil!.toString(input));
    
stringBuffer!.append(" == ");
    
stringBuffer!.append(stringUtil!.toString(mappedToInput));
    
this.logUtil!.putF(stringBuffer!.toString(), this, "InputMapping::remove");
    

                                    }
                                
                        else {
                            stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append("Not Deleted: ");
    
stringBuffer!.append(stringUtil!.toString(input));
    
stringBuffer!.append(" == ");
    
stringBuffer!.append(stringUtil!.toString(mappedToInput));
    
this.logUtil!.putF(stringBuffer!.toString(), this, "InputMapping::remove");
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public addMapping(InputToGameKeyMapping inputToGameKeyMapping){



                            throw new Exception(this.commonStrings!.NOT_IMPLEMENTED);
                    
}


    public add(Input input, Input mappedToInput){

    list: BasicArrayList = this.getMappedInput(input)!;;
    

                        if(!list.contains(mappedToInput))
                        
                                    {
                                    list.add(mappedToInput);
    
this.mappedList!.add(mappedToInput);
    

                                    }
                                
}


    public bool isMapped(Input input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.mappedList!.contains(input);;
    
}


    public BasicArrayList getMappedInput(Input id){

    mappingInputCanBeNullList: any = this.hashtable.get(id);;
    

                        if(mappingInputCanBeNullList == 
                                    null
                                )
                        
                                    {
                                    
    list: BasicArrayList = new BasicArrayListD();;
    
this.hashtable.put(id, list);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return mappingInputCanBeNullList as BasicArrayList;
    
}


    public Hashtable<any, any> getHashtable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hashtable;
    
}


};

            

