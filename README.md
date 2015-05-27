# Projet QT - Chat 
## Contenu
2 dossiers :
  - client
      => dossier du client
  - serveur
      => dossier du serveur

## Mise en place
Dans les deux dossiers effectués les commandes suivantes :
* Effectuer ```qmake -project```
* Ajouter dans serveur.pro pour le dossier serveur ```QT += core gui network widgets```
* Ajouter dans client.pro pour le dossier client ```QT += core gui network widgets```
* Pour obtenir le Makefile taper ```qmake```
* Et enfin exécuter le Makefile avec ```make```

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
