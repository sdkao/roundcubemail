<?php

/*
 +-----------------------------------------------------------------------+
 | plugins/managesieve/localization/<lang>.inc                           |
 |                                                                       |
 | Localization file of the Roundcube Webmail Managesieve plugin         |
 | Copyright (C) 2012-2013, The Roundcube Dev Team                       |
 |                                                                       |
 | Licensed under the GNU General Public License version 3 or            |
 | any later version with exceptions for skins & plugins.                |
 | See the README file for a full license statement.                     |
 |                                                                       |
 +-----------------------------------------------------------------------+

 For translation see https://www.transifex.com/projects/p/roundcube-webmail/resource/plugin-managesieve/
*/
$labels['filters'] = 'Filteri';
$labels['managefilters'] = 'Uredi filtere za pristiglu poštu';
$labels['filtername'] = 'Naziv filtera';
$labels['newfilter'] = 'Novi filter';
$labels['filteradd'] = 'Dodaj filter';
$labels['filterdel'] = 'Obriši filter';
$labels['moveup'] = 'Pomakni gore';
$labels['movedown'] = 'Pomakni dolje';
$labels['filterallof'] = 'koje odgovaraju svim sljedećim pravilima';
$labels['filteranyof'] = 'koje odgovaraju bilo kojem od sljedećih pravila';
$labels['filterany'] = 'sve poruke';
$labels['filtercontains'] = 'sadrži';
$labels['filternotcontains'] = 'ne sadrži';
$labels['filteris'] = 'jednako je';
$labels['filterisnot'] = 'nije jednako';
$labels['filterexists'] = 'postoji';
$labels['filternotexists'] = 'ne postoji';
$labels['filtermatches'] = 'odgovara izrazu';
$labels['filternotmatches'] = 'ne odgovara izrazu';
$labels['filterregex'] = 'odgovara regularnom izrazu';
$labels['filternotregex'] = 'ne odgovara regularnom izrazu';
$labels['filterunder'] = 'ispod';
$labels['filterover'] = 'iznad';
$labels['addrule'] = 'Dodaj pravilo';
$labels['delrule'] = 'Obriši pravilo';
$labels['messagemoveto'] = 'Premjesti poruku u';
$labels['messageredirect'] = 'Preusmjeri poruku na';
$labels['messagecopyto'] = 'Kopiraju poruku u';
$labels['messagesendcopy'] = 'Pošalji kopiju poruke na';
$labels['messagereply'] = 'Odgovori sa porukom';
$labels['messagedelete'] = 'Obriši poruku';
$labels['messagediscard'] = 'Otkaži sa porukom';
$labels['messagesrules'] = 'Za pristigle poruke:';
$labels['messagesactions'] = '...primijeni sljedeće akcije:';
$labels['add'] = 'Dodaj';
$labels['del'] = 'Obriši';
$labels['sender'] = 'Pošiljatelj';
$labels['recipient'] = 'Primatelj';
$labels['vacationdays'] = 'Koliko često slati poruku (u danima):';
$labels['vacationreason'] = 'Tijelo poruke (razlog odmora):';
$labels['vacationsubject'] = 'Naslov poruke:';
$labels['rulestop'] = 'Prekini izvođenje filtera';
$labels['enable'] = 'Omogući/Onemogući';
$labels['filterset'] = 'Grupa filtera';
$labels['filtersets'] = 'Filteri';
$labels['filtersetadd'] = 'Dodaj grupu filtera';
$labels['filtersetdel'] = 'Obriši odabranu grupu filtera';
$labels['filtersetact'] = 'Aktiviraj odabranu grupu filtera';
$labels['filtersetdeact'] = 'Deaktiviraj odabranu grupu filtera';
$labels['filterdef'] = 'Definicije filtera';
$labels['filtersetname'] = 'Naziv grupe filtera';
$labels['newfilterset'] = 'Nova grupa filtera';
$labels['active'] = 'aktivan';
$labels['none'] = 'nijedan';
$labels['fromset'] = 'iz grupe';
$labels['fromfile'] = 'iz datoteke';
$labels['filterdisabled'] = 'Deaktiviraj filter';
$labels['countisgreaterthan'] = 'brojač je veći od';
$labels['countisgreaterthanequal'] = 'brojač je veći ili jednak od';
$labels['countislessthan'] = 'brojač je manji od';
$labels['countislessthanequal'] = 'brojač je manji ili jednak od';
$labels['countequals'] = 'brojač je jednak';
$labels['valueisgreaterthan'] = 'vrijednost je veća od';
$labels['valueisgreaterthanequal'] = 'vrijednost je veća ili jednaka od';
$labels['valueislessthan'] = 'vrijednost je manja od';
$labels['valueislessthanequal'] = 'vrijednost je manja ili jednaka od';
$labels['valueequals'] = 'vrijednost je jednaka';
$labels['setflags'] = 'Postavi oznake na poruku';
$labels['addflags'] = 'Dodaj oznake na poruku';
$labels['removeflags'] = 'Ukloni oznake sa poruke';
$labels['flagread'] = 'Pročitana';
$labels['flagdeleted'] = 'Obrisana';
$labels['flaganswered'] = 'Odgovorena';
$labels['flagflagged'] = 'Označena';
$labels['flagdraft'] = 'Predložak';
$labels['filtercreate'] = 'Stvori filter';
$labels['usedata'] = 'Koristi podatke za filter:';
$labels['nextstep'] = 'Idući korak';
$labels['...'] = '…';
$labels['advancedopts'] = 'Napredne postavke';
$labels['body'] = 'Tijelo poruke';
$labels['address'] = 'adresa';
$labels['envelope'] = 'omotnica';
$labels['modifier'] = 'modificirao:';
$labels['text'] = 'tekst';
$labels['undecoded'] = 'nedekodirano (raw)';
$labels['contenttype'] = 'tip sadržaja';
$labels['modtype'] = 'tip:';
$labels['allparts'] = 'sve';
$labels['domain'] = 'domena';
$labels['localpart'] = 'lokalni dio';
$labels['user'] = 'korisnik';
$labels['detail'] = 'detalj';
$labels['comparator'] = 'usporedio:';
$labels['default'] = 'preddefinirano';
$labels['octet'] = 'strogo (oktet)';
$labels['asciicasemap'] = 'neosjetljivo na veličinu slova (ascii-casemap)';
$labels['asciinumeric'] = 'numerički (ascii-numeric)';
$messages['filterunknownerror'] = 'Nepoznata greška na poslužitelju';
$messages['filterconnerror'] = 'Nemoguće spajanje na poslužitelj (managesieve)';
$messages['filterdeleted'] = 'Filter je uspješno obrisan';
$messages['filtersaved'] = 'Filter je uspješno spremljen';
$messages['filterdeleteconfirm'] = 'Sigurno želite obrisati odabrani filter?';
$messages['ruledeleteconfirm'] = 'Jeste li sigurni da želite obrisati odabrana pravila?';
$messages['actiondeleteconfirm'] = 'Jeste li sigurni da želite obrisati odabrane akcije?';
$messages['forbiddenchars'] = 'Nedozvoljeni znakovi u polju';
$messages['cannotbeempty'] = 'Polje nesmije biti prazno';
$messages['ruleexist'] = 'Filter sa zadanim imenom već postoji.';
$messages['setactivated'] = 'Grupa filtera je uspješno aktivirana';
$messages['setdeactivated'] = 'Grupa filtera je uspješno deaktivirana';
$messages['setdeleted'] = 'Grupa filtera je uspješno obrisana';
$messages['setdeleteconfirm'] = 'Jeste li sigurni da želite obrisati odabranu grupu filtera?';
$messages['setcreated'] = 'Grupa filtera je uspješno stvorena';
$messages['deactivated'] = 'Filter(i) omogućen(i) uspješno.';
$messages['activated'] = 'Filter(i) onemogućen(i) uspješno.';
$messages['moved'] = 'Filter uspješno premješten.';
$messages['nametoolong'] = 'Nemoguće napraviti grupu filtera. Naziv je predugačak';
$messages['namereserved'] = 'Rezervirano ime.';
$messages['setexist'] = 'Skup već postoji.';
$messages['nodata'] = 'Barem jedan pozicija mora biti odabrana!';
?>
