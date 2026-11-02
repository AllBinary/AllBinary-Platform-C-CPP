
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANDROID_VIEWSWAPPER_CPP
        #define ORG_ALLBINARY_ANDROID_VIEWSWAPPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/ViewSwapper.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <android/app/Activity.h>

      
#include <android/view/View.h>

      
#include <android/view/ViewGroup.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
std::vector<View*> ViewSwapper::NULL_VIEW_ARRAY = {};

ViewSwapper::ViewSwapper(Activity* activity, int32_t rootViewId) : mainViewArray(ViewSwapper::NULL_VIEW_ARRAY), topViewArray(ViewSwapper::NULL_VIEW_ARRAY){
this->activity= activity;
    
this->rootViewId= rootViewId;
    
}


    auto ViewSwapper::setMainViews(std::vector<View*> viewArray) -> void{
this->mainViewArray= viewArray;
    
}


    auto ViewSwapper::setTopViewArray(std::vector<View*> topViewArray) -> void{
this->topViewArray= topViewArray;
    
}


    auto ViewSwapper::setMainView(int32_t id) -> void{

    ViewGroup* viewGroup = dynamic_cast<ViewGroup*>(this->activity->findViewById(this->rootViewId) as unknown);;
    

                        if(id != this->currentMainViewId)
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < this->topViewArray.size(); index++)
        {
viewGroup->removeView(this->topViewArray[index]);
    
}





                        for (
    int32_t index = 0;index < this->mainViewArray.size(); index++)
        {

                        if(id != this->mainViewArray[index]->getId())
                        
                                    {
                                    viewGroup->removeView(this->mainViewArray[index]);
    

                                    }
                                
}





                        for (
    int32_t index = 0;index < this->mainViewArray.size(); index++)
        {

                        if(id == this->mainViewArray[index]->getId())
                        
                                    {
                                    viewGroup->addView(this->mainViewArray[index]);
    
this->currentMainViewId= id;
    

                                    }
                                
}





                        for (
    int32_t index = 0;index < this->topViewArray.size(); index++)
        {
viewGroup->addView(this->topViewArray[index]);
    
}


                                    }
                                
}




        #endif //ORG_ALLBINARY_ANDROID_VIEWSWAPPER_CPP
