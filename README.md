# Organized  
Le programme doit permettre d'ajouter et de supprimer des matériels, qui sont classés dans cinq catégories principales : Actuators, Devices, Processors, Sensors et Wires.  
Les matériels sont stockés sous forme de listes chaînées pour une gestion efficace.  

**Utilisation :**
Compilation :
> make

lancer programme :  
> ./organized

**Commandes :**  
Ajouter un nouveau matériel.  
Materials liste :  ACTUATORS, DEVICES, PROCESSORS, SENSORS, WIRES
> add MATERIALS nom

Supprimer un matériel existant :  
> del ID

Afficher le contenu de la liste :  
> disp

Trier les matériels présents selon différents critères:  
> sort (NAME / ID / TYPE) (-r) ...

Sortir :  
> exit
