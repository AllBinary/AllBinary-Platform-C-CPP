
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
        



#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/graphics/form/item/ABTextFieldItem.h>

      
#include <org/allbinary/logic/control/validate/ValidatorBase.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TextFieldItemValidator: public ValidatorBase {
        

    private: const textFieldItem: ABTextFieldItem;

    private: min: int32_t;

    private: max: int32_t;

    private: allowOnEmpty: bool;

public constructor (ABTextFieldItem textFieldItem, int32_t min, int32_t max, bool allowOnEmpty){

            super();
        this.textFieldItem= textFieldItem;
    
this.min= min;
    
this.max= max;
    
this.allowOnEmpty= allowOnEmpty;
    
}


    public Boolean isValid(){

    booleanFactory: BooleanFactory = BooleanFactory.getInstance()!;;
    

    result: Boolean = booleanFactory!.TRUE;;
    

    string: string = this.textFieldItem!.getString()!;;
    

    textLength: int32_t = string.length!;;
    

                        if((textLength == 0 && this.allowOnEmpty) || textLength > this.min && textLength < this.max)
                        
                                    {
                                    
                                    }
                                
                        else {
                            
                        if(textLength < this.min)
                        
                                    {
                                    result= booleanFactory!.FALSE;
    

                                    }
                                
                             else 
                        if(textLength > this.max)
                        
                                    {
                                    result= booleanFactory!.FALSE;
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


    public BasicArrayList toList(){

    list: BasicArrayList = new BasicArrayListD();;
    

    string: string = this.textFieldItem!.getString()!;;
    

    textLength: int32_t = string.length!;;
    

                        if(textLength > this.min && textLength < this.max)
                        
                                    {
                                    
                                    }
                                
                        else {
                            
    label: string = this.textFieldItem!.getLabel()!;;
    

    name: string = label.substring(0, label.length -2)!;;
    

                        if(textLength < this.min)
                        
                                    {
                                    list.add(new StringMaker().append(name)!.append(" is to short")!.toString());
    

                                    }
                                
                             else 
                        if(textLength > this.max)
                        
                                    {
                                    list.add(new StringMaker().append(name)!.append(" is to long")!.toString());
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    
}


};

            

