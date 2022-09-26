function toggle() {
    let slider = document.querySelector('.switch-theme-button .slider')
    console.log(slider.classList)
    if (slider.classList.contains('turnedOn')){
        slider.classList.remove('turnedOn')
    }else{
        slider.classList.add('turnedOn')
    }
}

const serviceSection = document.getElementById('servicesSection')
const body = document.body

const servicecard1 = document.getElementById('serviceCard1')
const servicecard2 = document.getElementById('serviceCard2')
const servicecard3 = document.getElementById('serviceCard3')

window.addEventListener('scroll', serviceSectionScrollHandle)
function serviceSectionScrollHandle(){
    const scrollable = Math.round(document.documentElement.scrollHeight - window.innerHeight)
    const scrollTopVal = Math.round(window.scrollY)
    
    const scrollPosition = scrollable-scrollTopVal
    console.log(scrollPosition)
    if(scrollPosition<4400){
        servicecard1.classList.add('mov1')
        if (scrollPosition<4200){
            servicecard2.classList.add('mov2')
            if (scrollPosition <4000){
                servicecard3.classList.add('mov3')
                if(scrollPosition <3000){
                    servicecard1.classList.remove('mov1')
                    servicecard2.classList.remove('mov2')
                    servicecard3.classList.remove('mov3')
                }
            }else{
                servicecard3.classList.remove('mov3')
            }
        }else{
            servicecard2.classList.remove('mov2')
        }
    }else{
        servicecard1.classList.remove('mov1')
    }
}