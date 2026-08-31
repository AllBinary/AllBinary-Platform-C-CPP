
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        
            #include "../../../../java/lang/Math.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class J2SEMath
            : public Object
         {
        

    private: static const instance: J2SEMath = new J2SEMath();

    public static J2SEMath getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return J2SEMath.instance;
    
}


    public int32_t round(float value){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Math.round(value);;
    
}


    public float abs(float value){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (value < 0)
                        ?       
                                 -value
                                :

                            value;

    ;
    
}


    public double absdouble(double value){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (value < 0)
                        ?       
                                 -value
                                :

                            value;

    ;
    
}


};

            

