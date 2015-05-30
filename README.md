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
Vous obtenez ce visuel :
![Image coté client](https://github.com/manu92/projetQT/blob/master/pageConnection.png)

* Sélectionner votre image
* Ecriver l'adresse IP de votre ordinateur (ex: 192.168.1.38)
* Ecriver votre pseudo
* Cliquer sur Connexion

## Résultat souhaité
Côté serveur :
![Image coté serveur](https://github.com/manu92/projetQT/blob/master/coteServeur.png)
Côté client :
![Image coté client](https://github.com/manu92/projetQT/blob/master/resultat.png)
