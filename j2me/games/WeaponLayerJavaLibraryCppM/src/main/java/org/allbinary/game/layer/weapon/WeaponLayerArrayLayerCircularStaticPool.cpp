
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
        
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "WeaponLayer.h"

class WeaponLayerArrayLayerCircularStaticPool
            : public Object
         {

    private: static WeaponLayerArrayLayerCircularStaticPool instance() { return WeaponLayerArrayLayerCircularStaticPool(); }

    public: static WeaponLayerArrayLayerCircularStaticPool getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return WeaponLayerArrayLayerCircularStaticPool::instance();
    
}


    private: const int32_t MAX = 5;

    private: CircularIndexUtil circularIndexUtil = CircularIndexUtil::createInstance(this->MAX);

    private: std::vector<std::vector<std::vector<Object*>>> ALL_WEAPONLAYER_ARRAY = std::vector<std::vector<std::vector<Object*>>>(4);

    public: void init(){

    std::vector<std::vector<Object*>> WEAPONLAYER_ARRAY = std::vector<std::vector<Object*>>(this->MAX *2);;
    

    std::vector<std::vector<Object*>> TWO_WEAPONLAYER_ARRAY = std::vector<std::vector<Object*>>(this->MAX);;
    

    std::vector<std::vector<Object*>> THREE_WEAPONLAYER_ARRAY = std::vector<std::vector<Object*>>(this->MAX);;
    




                        for (
    int32_t index = 0;index < this->MAX; index++)
        {
WEAPONLAYER_ARRAY[index]= std::vector<Object*>(1);
    
TWO_WEAPONLAYER_ARRAY[index]= std::vector<Object*>(2);
    
THREE_WEAPONLAYER_ARRAY[index]= std::vector<Object*>(3);
    
}

this->ALL_WEAPONLAYER_ARRAY[1]= WEAPONLAYER_ARRAY;
    
this->ALL_WEAPONLAYER_ARRAY[2]= TWO_WEAPONLAYER_ARRAY;
    
this->ALL_WEAPONLAYER_ARRAY[3]= THREE_WEAPONLAYER_ARRAY;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::vector<WeaponLayer> getInstanceArray(int32_t size){

    std::vector<WeaponLayer> weaponLayerArray = this->ALL_WEAPONLAYER_ARRAY[size][this->circularIndexUtil.getIndex()] as WeaponLayer[];;
    
this->circularIndexUtil.next();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return weaponLayerArray;
    
}


};

            

