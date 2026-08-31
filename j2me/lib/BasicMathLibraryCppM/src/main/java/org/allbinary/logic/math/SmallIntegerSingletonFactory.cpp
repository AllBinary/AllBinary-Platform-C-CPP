
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SmallIntegerSingletonFactory
            : public Object
         {
        

    private: static const instance: SmallIntegerSingletonFactory = new SmallIntegerSingletonFactory();

    public static SmallIntegerSingletonFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SmallIntegerSingletonFactory.instance;
    
}


    public const NEGATIVE_MAX: int32_t = 500;

    public const POSITIVE_MAX: int32_t = 0x2D1;

    private: const INTEGER_ARRAY: std::vector<Integer> = new Array(this.NEGATIVE_MAX +this.POSITIVE_MAX);

    private: const STRING_ARRAY: std::vector<string> = new Array(this.NEGATIVE_MAX +this.POSITIVE_MAX);

    private: MIN: int32_t = 0;

    private: lastMin: int32_t = 0;

    private: lastNegativeMin: int32_t = 0;

    public int32_t getMin(){

    minAllowed: int32_t = (J2MEUtil.isJ2ME()
                        ?       
                                0
                                :

                            
                                        //Otherwise - expression - elseExpr - ConditionalExpr
;

    );;
    

                        if(this.MIN <= minAllowed)
                        
                                    {
                                    
                        if(J2MEUtil.isJ2ME())
                        
                                    {
                                    
                                    }
                                
                             else 
                        if(AndroidUtil.isAndroid())
                        
                                    {
                                    
    logUtil: LogUtil = LogUtil.getInstance()!;;
    
logUtil!.putF("Android InputFactory was initialized before GameMidlet: " +this.MIN, this, "getMin");
    
this.initWithRange(0x291, 6);
    

                                    }
                                
                        else {
                            
    logUtil: LogUtil = LogUtil.getInstance()!;;
    
logUtil!.putF("InputFactory was initialized before GameMidlet or KeyFactoryInitializer - Currently this is occurs on JS build by TouchMotionGestureFactory constructor: " +this.MIN, this, "getMin");
    
this.initWithRange(0x2D0, 6);
    

                        }
                            

                                    }
                                

                        if(this.MIN <= minAllowed)
                        
                                    {
                                    
    logUtil: LogUtil = LogUtil.getInstance()!;;
    
logUtil!.put("This means you loaded the InputFactory before determining the platform input size requirements.", this, "getMin", new Exception());
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.MIN;
    
}


    public initWithRange(int32_t value, int32_t negativeValue){




                        for (
    index: int32_t = value -1;index >= this.lastMin; index--)
        {
this.INTEGER_ARRAY[index +this.NEGATIVE_MAX]= new Integer(index);
    
}





                        for (
    index: int32_t = negativeValue -1;index >= this.lastNegativeMin; index--)
        {
this.INTEGER_ARRAY[index]= new Integer( -index);
    
}


                        if(this.lastMin < value)
                        
                                    {
                                    this.lastMin= value;
    
this.MIN= value;
    

                                    }
                                

                        if(this.lastNegativeMin < negativeValue)
                        
                                    {
                                    this.lastNegativeMin= negativeValue;
    

                                    }
                                
}


    public init(){

                        if(this.lastMin < this.POSITIVE_MAX || this.lastNegativeMin < this.NEGATIVE_MAX)
                        
                                    {
                                    



                        for (
    index: int32_t = this.POSITIVE_MAX -1;index >= this.lastMin; index--)
        {
this.INTEGER_ARRAY[index +this.NEGATIVE_MAX]= new Integer(index);
    
}





                        for (
    index: int32_t = this.NEGATIVE_MAX -1;index >= this.lastNegativeMin; index--)
        {
this.INTEGER_ARRAY[index]= new Integer( -index);
    
}

this.lastMin= this.POSITIVE_MAX;
    
this.MIN= this.lastMin;
    
this.lastNegativeMin= this.NEGATIVE_MAX;
    

                                    }
                                
}


private constructor (){

            super();
        this.initWithRange(23, 0);
    
}


    public Integer getAt(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.INTEGER_ARRAY[index +this.NEGATIVE_MAX]!;
    
}


    public Integer getAtNoThrow(int32_t index){

                        if(index +this.NEGATIVE_MAX > this.INTEGER_ARRAY.length -1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.INTEGER_ARRAY[ -1 +this.NEGATIVE_MAX]!;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.INTEGER_ARRAY[index +this.NEGATIVE_MAX]!;
    
}


    public Integer createInstance(int32_t index){

    integer: Integer = this.getAt(index)!;;
    

                        if(integer == 
                                    null
                                )
                        
                                    {
                                    integer= new Integer(index);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return integer;
    
}


    public string getString(int32_t index){

    i: int32_t = index +this.NEGATIVE_MAX;;
    

                        if(this.STRING_ARRAY[i] == 
                                    null
                                )
                        
                                    {
                                    this.STRING_ARRAY[i]= this.INTEGER_ARRAY[i]!.toString();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.STRING_ARRAY[i]!;
    
}


};

            

