
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/Enumeration.h>

      
#include <org/allbinary/layer/Layer.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/EnumerationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LevelLayersFinder
            : public Object
         {

    private: static LevelLayersFinder instance() { return LevelLayersFinder(); }

    public: static LevelLayersFinder getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LevelLayersFinder::instance();
    
}


    private: const EnumerationUtil enumerationUtil = EnumerationUtil::getInstance();

    public: BasicArrayList get(ABHashtable<Object*, Object*> hashtable){

    SmallIntegerSingletonFactory smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();;
    

    BasicArrayList list = BasicArrayListD();;
    

    Enumeration<Object*> enumeration = hashtable.keys();;
    

    ABHashtable<Object*, Object*> layerHashtableCanBeNull;;
    

    Integer integerCanBeNull;;
    

    Integer cachedIntegerCanBeNull;;
    

        while(this->enumerationUtil.hasMoreElements(enumeration))
        {
layerHashtableCanBeNull= hashtable.get(this->enumerationUtil.nextElement(enumeration));
    
integerCanBeNull= layerHashtableCanBeNull.get(Layer::ID);
    
cachedIntegerCanBeNull= smallIntegerSingletonFactory.getAt(integerCanBeNull.intValue());
    

                        if(!list.contains(cachedIntegerCanBeNull))
                        
                                    {
                                    list.add(cachedIntegerCanBeNull);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    
}


};

            

