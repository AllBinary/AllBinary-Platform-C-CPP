
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
        
            #include "../../../../../java/lang/Object.h"
        
#include <java/net/URL.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/help/HelpSet.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class JavaHelpSetNotifier
            : public Object
         {

    private: static BasicArrayList vector = BasicArrayListD();

    private: static BasicArrayList get(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaHelpSetNotifier::vector;
    
}


    public: static bool isNotified(HelpSet helpSet){

    bool isNotified = false;;
    

    URL url = helpSet.getHelpSetURL();;
    

    int32_t size = JavaHelpSetNotifier::vector.size();;
    

    std::vector<Object*> urlArray = JavaHelpSetNotifier::vector.toArray();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    URL nextURL = urlArray[i]! as URL;;
    

                        if(url.toString().compareTo(nextURL.toString()) == 0)
                        
                                    {
                                    isNotified= true;
    

                                    }
                                
}

JavaHelpSetNotifier::vector.add(url);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return isNotified;
    
}


private: JavaHelpSetNotifier(){
}


};

            

