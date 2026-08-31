
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
        
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "WeaponLayer.h"

class WeaponLayerArrayLayerCircularStaticPool
            : public Object
         {
        

    private: static const instance: WeaponLayerArrayLayerCircularStaticPool = new WeaponLayerArrayLayerCircularStaticPool();

    public static WeaponLayerArrayLayerCircularStaticPool getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return WeaponLayerArrayLayerCircularStaticPool.instance;
    
}


    private: const MAX: int32_t = 5;

    private: circularIndexUtil: CircularIndexUtil = CircularIndexUtil.createInstance(this.MAX)!;

    private: ALL_WEAPONLAYER_ARRAY: std::vector<std::vector<std::vector<any>>> = new Array(4)
                                                        ;

    public init(){

    WEAPONLAYER_ARRAY: std::vector<std::vector<any>> = new Array(this.MAX *2)
                                                            ;;
    

    TWO_WEAPONLAYER_ARRAY: std::vector<std::vector<any>> = new Array(this.MAX)
                                                            ;;
    

    THREE_WEAPONLAYER_ARRAY: std::vector<std::vector<any>> = new Array(this.MAX)
                                                            ;;
    




                        for (
    index: int32_t = 0;index < this.MAX; index++)
        {
WEAPONLAYER_ARRAY[index]= new Array(1);
    
TWO_WEAPONLAYER_ARRAY[index]= new Array(2);
    
THREE_WEAPONLAYER_ARRAY[index]= new Array(3);
    
}

this.ALL_WEAPONLAYER_ARRAY[1]= WEAPONLAYER_ARRAY;
    
this.ALL_WEAPONLAYER_ARRAY[2]= TWO_WEAPONLAYER_ARRAY;
    
this.ALL_WEAPONLAYER_ARRAY[3]= THREE_WEAPONLAYER_ARRAY;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public std::vector<WeaponLayer> getInstanceArray(int32_t size){

    weaponLayerArray: std::vector<WeaponLayer> = this.ALL_WEAPONLAYER_ARRAY[size]![this.circularIndexUtil!.getIndex()]! as WeaponLayer[];;
    
this.circularIndexUtil!.next();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return weaponLayerArray;
    
}


};

            

