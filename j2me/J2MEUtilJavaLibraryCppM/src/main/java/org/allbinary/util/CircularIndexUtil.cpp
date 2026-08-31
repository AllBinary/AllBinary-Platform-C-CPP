
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
        



            #include "../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CircularIndexUtil
            : public Object
         {
        

    public static const NULL_CIRCULAR_INDEX_UTIL: CircularIndexUtil = new CircularIndexUtil(0, 0);

    public static CircularIndexUtil createInstance(int32_t max){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new CircularIndexUtil(0, max);
    
}


    public static CircularIndexUtil createInstanceAt(int32_t index, int32_t max){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new CircularIndexUtil(index, max);
    
}


    private: index: int32_t = 0;

    private: lastIndex: int32_t = 0;

    private: size: int32_t = 0;

private constructor (int32_t index, int32_t size){

            super();
        this.setSize(size);
    
this.setIndex(index);
    
}


    public int32_t next(){

                        if(this.index >= this.lastIndex)
                        
                                    {
                                    this.index= 0;
    

                                    }
                                
                        else {
                            this.index++;
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.index;
    
}


    public int32_t previous(){

                        if(this.index < 1)
                        
                                    {
                                    this.index= this.lastIndex;
    

                                    }
                                
                        else {
                            this.index--;
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.index;
    
}


    public setIndex(int32_t index){

                        if(index > this.lastIndex)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
this.index= index;
    
}


    public int32_t getIndex(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.index;
    
}


    public setSize(int32_t size){
this.size= size;
    
this.lastIndex= size -1;
    
this.index= 0;
    
}


    public int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.size;
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new StringMaker().append(CommonLabels.getInstance()!.INDEX_LABEL)!.appendint(this.index)!.append("lastIndex: ")!.appendint(this.lastIndex)!.append("size: ")!.appendint(this.size)!.toString();;
    
}


};

            

