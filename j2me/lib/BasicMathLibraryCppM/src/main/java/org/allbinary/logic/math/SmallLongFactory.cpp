
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
        
            #include "../../../../java/lang/Long.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SmallLongFactory
            : public Object
         {
        

    private: static const instance: SmallLongFactory = new SmallLongFactory();

    public static SmallLongFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SmallLongFactory.instance;
    
}


    public const NEGATIVE_MAX: int32_t = 500;

    public const POSITIVE_MAX: int32_t = 0x2D1;

    private: const INTEGER_ARRAY: std::vector<Long> = new Array(this.NEGATIVE_MAX +this.POSITIVE_MAX);

    private: const STRING_ARRAY: std::vector<string> = new Array(this.NEGATIVE_MAX +this.POSITIVE_MAX);

    public MIN: int32_t = 0;

    public lastMin: int32_t = 0;

    public lastNegativeMin: int32_t = 0;

    public initWithRange(int32_t value, int32_t negativeValue){




                        for (
    index: int32_t = value -1;index >= this.lastMin; index--)
        {
this.INTEGER_ARRAY[index +this.NEGATIVE_MAX]= new Long(index);
    
}





                        for (
    index: int32_t = negativeValue -1;index >= this.lastNegativeMin; index--)
        {
this.INTEGER_ARRAY[index]= new Long( -index);
    
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

                        if(this.INTEGER_ARRAY[0] == 
                                    null
                                )
                        
                                    {
                                    
                        if(this.lastMin < this.POSITIVE_MAX || this.lastNegativeMin < this.NEGATIVE_MAX)
                        
                                    {
                                    



                        for (
    index: int32_t = this.POSITIVE_MAX -1;index >= this.lastMin; index--)
        {
this.INTEGER_ARRAY[index +this.NEGATIVE_MAX]= new Long(index);
    
}





                        for (
    index: int32_t = this.NEGATIVE_MAX -1;index >= this.lastNegativeMin; index--)
        {
this.INTEGER_ARRAY[index]= new Long( -index);
    
}

this.lastMin= this.POSITIVE_MAX;
    
this.lastNegativeMin= this.NEGATIVE_MAX;
    

                                    }
                                

                                    }
                                
}


private constructor (){

            super();
        }


    public Long getInstanceNoThrow(int64_t index){

                        if(index +this.NEGATIVE_MAX > this.INTEGER_ARRAY.length -1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.INTEGER_ARRAY[ -1 +this.NEGATIVE_MAX]!;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.INTEGER_ARRAY[(static_cast<int32_t>(index)) +this.NEGATIVE_MAX]!;
    
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

            

