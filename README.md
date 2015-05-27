# Projet QT - Chat 
## Contenu
2 dossiers :
  - client
      => dossier du client
  - serveur
      => dossier du serveur

## Mise en place
* Effectuer ```qmake -project``` dans les deux dossiers
* Ajouter dans serveur.pro et client.pro ```QT += core gui network widgets``` dans les deux dossiers
* Effectuer ```qmake``` dans les deux dossiers
* Effectuer ```make``` dans les deux dossiers

## Exécution
* Exécuter le serveur
```
./server
```

* Exécuter le client (côté Raspberry Pi)
```
./client
```

## Résultat souhaité
![Image of Chat]
